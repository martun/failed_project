include_directories(.)

add_library(database STATIC 
    src/mongo_provider.cc
)

# Add mongodb.
find_package(libmongocxx REQUIRED)
find_package(libbsoncxx REQUIRED)

target_include_directories(database
  PRIVATE ${LIBMONGOCXX_INCLUDE_DIRS}
)

target_compile_definitions(database
  PRIVATE ${LIBMONGOCXX_DEFINITIONS}
)

target_link_libraries(database 
    node-cpp2
    thrift
    thriftcpp2
    thriftprotocol
    boost_system
    ${LIBMONGOCXX_LIBRARIES}
)

