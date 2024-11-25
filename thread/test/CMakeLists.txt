cmake_minimum_required(VERSION 3.6)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

project(Turoial_dapei)

set(CMAKE_VERBOSE_MAKEFILE ON)


include_directories("/home/kkk/build/release-install-cpp11/include")


add_executable(test
    SelfDeadLock.cc
)

target_link_libraries(test PUBLIC 
    /home/kkk/build/release-install-cpp11/lib/libmuduo_net.a
    /home/kkk/build/release-install-cpp11/lib/libmuduo_base.a
    /home/kkk/build/release-install-cpp11/lib/libmuduo_http.a
    /home/kkk/build/release-install-cpp11/lib/libmuduo_inspect.a
)

install(TARGETS test DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/build/bin)
