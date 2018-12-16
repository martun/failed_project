#include <folly/init/Init.h>
#include <folly/executors/GlobalExecutor.h>
#include <folly/executors/CPUThreadPoolExecutor.h>
#include <thrift/lib/cpp2/server/ThriftServer.h>

#include "node.h"

DEFINE_string(host, "localhost", "IP adress of the current node this node.");
DEFINE_int32(port, -1, "node daemon port number");
DEFINE_string(data_path, "/tmp", "Folder containing all the data stored for this node.");

int main(int argc, char** argv) {
  try {
    gflags::ParseCommandLineFlags(&argc, &argv, false);

    folly::init(&argc, &argv, false);

    if (FLAGS_port == -1) {
      LOG(INFO) << "Using default port 40001";
      FLAGS_port = 40001;
    }
    
    // Tell folly to use as many threads as there are cores on the machine.
    auto cpu_pool = std::make_shared<folly::CPUThreadPoolExecutor>(
        std::thread::hardware_concurrency());
    folly::setCPUExecutor(cpu_pool);
    
    std::shared_ptr<node::Node> node = std::make_shared<node::Node>(FLAGS_host, FLAGS_port);

    // Create a thrift server
    std::shared_ptr<apache::thrift::ThriftServer> server =
        std::make_shared<apache::thrift::ThriftServer>();

    // Set server handler object
    server->setInterface(node);
    // Set the server port
    server->setPort(FLAGS_port);
    // Start the server to serve!!
    server->serve();
  } catch (const std::exception& ex) {
    LOG(ERROR) << ex.what();
    exit(EXIT_FAILURE);
  }

  return 0;
}
