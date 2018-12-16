## POC blockchain.
Failed attempt to implement a simple PoC blockchain. 

## Building
Build project:

    Export THIRD_PARTIES_DIR environment variable to PATH_TO_PROJECT/poc/third_parties/lib for cmake dependencies such as thrift.

    cd /path/to/project
    mkdir build
    cd build
    cmake ..
    make -j4

Debug Build: 

    cd /path/to/project
    mkdir build_debug
    cd build_debug
    cmake -DCMAKE_BUILD_TYPE=Debug ..
    make -j4

# Third parties
All the necessary third party libraries are included, code is tested on Ubuntu 18.04 only for now. For another system you may need to compile with folly yourself.

We are using [Mongo](http://mongocxx.org/) as a database storage, so you'll need to install it's C++ driver:


## Testing
We use [Google Test](https://github.com/google/googletest) for unit testing.

To run the tests:
    make test

## Thrift auto generated code generation
Run the following command: 

third_parties/bin/thrift1 -r --gen cpp node.thrift

## Contact e-mail
martun.karapetyan@gmail.com

## Documents

Below is the list of relevant articles and papers: \
[The first spec we have.](https://docs.google.com/document/d/1taKvYBzMDqrhO3HvDQZd2zmZHFZtykOyaTUtS4ZfHbQ/edit?ts=5c06304d#)

