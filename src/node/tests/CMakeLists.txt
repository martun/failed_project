
add_executable(node_sample_test node_sample_test.cc)

target_include_directories(node_sample_test PRIVATE ../)

target_link_libraries(node_sample_test
	node
	gtest
    pthread)

add_gtest(node_sample_test)
