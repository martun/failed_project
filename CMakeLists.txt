#
# See
# https://cmake.org/cmake/help/v3.0/manual/cmake-commands.7.html
# http://www.slideshare.net/DanielPfeifer1/cmake-48475415
#
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

# Project(<name> VERSION <version> LANGUAGES CXX)
project(Blockchain-PoC C CXX ASM)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMake" "${CMAKE_MODULE_PATH}")

# turns on colors in generated Makefile
set(CMAKE_COLOR_MAKEFILE)

# overwriting the source and binary directories with the current ones
# this is useful for other projects reusing this project as a subcomponent
set(CMAKE_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR})

# this will prohibit in-source-builds
if(${CMAKE_BINARY_DIR} STREQUAL ${CMAKE_SOURCE_DIR})
  message(STATUS "In-source-builds are not allowed")
  message(STATUS "Clean your source directory (e.g. delete the CMakeCache.txt file)")
  message(FATAL_ERROR "Please create a separate build directory and call CMake again")
endif(${CMAKE_BINARY_DIR} STREQUAL ${CMAKE_SOURCE_DIR})

# CMAKE_BUILD_TYPE can be Release/Debug
# For Sanitizer builds, set it to ASan/MSan/TSan.
# See the CMake directory for sanitizer cmake files
if (NOT CMAKE_BUILD_TYPE)
  message(STATUS "No build type selected, default to Debug")
  message(STATUS "To change pass -DCMAKE_BUILD_TYPE on command line")
  set(CMAKE_BUILD_TYPE "Debug")
endif()

if(NOT DEFINED ENV{THIRD_PARTIES_DIR})
  message(FATAL_ERROR "Your must export env variable THIRD_PARTIES_DIR. See README.md")
endif()

set (CXX_STANDARD "c++14")

enable_testing()
function(add_gtest NAME)
  add_test(NAME ${NAME} COMMAND ${NAME} --gtest_output=xml:${NAME}.xml --gtest_shuffle)
endfunction(add_gtest)


# separate out the C++ options which are not used in C 
# add boost logger macro
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=${CXX_STANDARD} -Woverloaded-virtual -DBOOST_LOG_DYN_LINK")

# these below apply to C and C++ files
add_compile_options(
  -Wall
  -Wextra
  -Werror
  -Wstrict-aliasing
  -Wno-unused-variable
  -Wno-unused-function
  -Wno-unused-parameter
  -Wno-missing-field-initializers
  -Wno-unused-but-set-parameter
  -Wno-deprecated-declarations # boost_iostreams uses auto_ptr
  -Wchar-subscripts
  -Wpointer-arith
  -Wno-sign-compare
  -Wformat
  -Wformat-security
  -Werror=format-security
  -fstack-protector-all
  -fPIE
  -fpie
  -pipe
  -fdata-sections
  -ffunction-sections
  -DRAPIDJSON_HAS_STDSTRING
)

#cmake is too old in xenial
#if ("${CMAKE_CXX_COMPILER_VERSION}" VERSION_GREATER_EQUAL "7.0.0")
if ("${CMAKE_CXX_COMPILER_VERSION}" STRGREATER "7")
  add_compile_options(-Wimplicit-fallthrough=0)
endif()


# all headers specified
include_directories(
  ${CMAKE_SOURCE_DIR}/src
  ${CMAKE_SOURCE_DIR}/src/common/include
  ${CMAKE_SOURCE_DIR}/src/crypto_primitives/include
  ${CMAKE_SOURCE_DIR}/src/database/include
  ${CMAKE_SOURCE_DIR}/src/node/include
  $ENV{THIRD_PARTIES_DIR}/include
  /usr/local/include/bsoncxx/v_noabi
  /usr/local/include/mongocxx/v_noabi
)
link_directories(
  $ENV{THIRD_PARTIES_DIR}/lib
)

message(${CMAKE_SOURCE_DIR})

# Include cppcheck target.  must come after compiler flags defined
# include(cppcheck)

# Include thrift library generator
set(THRIFT1 $ENV{THIRD_PARTIES_DIR}/bin/thrift1)
set(THRIFTCPP2 thriftcpp2)
set(THRIFT_TEMPLATES $ENV{THIRD_PARTIES_DIR}/include/thrift/templates)
include($ENV{THIRD_PARTIES_DIR}/include/thrift/ThriftLibrary.cmake)

function(poc_thrift_library FILENAME SERVICES INCLUDE_PREFIX)
  thrift_library(
    ${FILENAME}
    ${SERVICES}
    cpp2
    ""
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${INCLUDE_PREFIX}
  )
endfunction()

# Add mongodb.
find_package(libmongocxx REQUIRED)

add_subdirectory(src)
