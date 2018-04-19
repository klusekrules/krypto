project(MyHello CXX)
cmake_minimum_required(VERSION 2.8)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

file(GLOB_RECURSE KRYPTO_SOURCES "*.cpp")
file(GLOB_RECURSE KRYPTO_HEADERS "*.h")

set (KRYPTO_INCLUDE_DIRS "")
foreach (_headerFile ${KRYPTO_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND KRYPTO_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES KRYPTO_INCLUDE_DIRS)

add_library(krypto ${KRYPTO_SOURCES})
target_include_directories(krypto PRIVATE ${KRYPTO_INCLUDE_DIRS})
