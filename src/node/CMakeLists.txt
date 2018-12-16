poc_thrift_library(
    node
    Node
    node
)

add_library(node STATIC
    src/node.cc
)

target_link_libraries(node
    node-cpp2
    database
    thrift
    thriftcpp2
    thriftprotocol
    boost_system 
    protocol
    transport
    boost_filesystem
    async
    concurrency
    glog
    gflags
    folly
    ${LIBMONGOC_LIBRARIES}
    ${LIBMONGOCXX_LIBRARIES}
)

add_executable(node_daemon src/node_daemon.cc)
target_link_libraries(node_daemon 
    node
   )

add_subdirectory(tests)
