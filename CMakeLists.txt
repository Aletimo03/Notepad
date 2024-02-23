cmake_minimum_required(VERSION 3.8)
project(Notepad)
set(CMAKE_CXX_STANDARD 11)


set(SOURCE_FILES  Nota.h Nota.cpp Collection.h Collection.cpp QuantityObserver.h QuantityObserver.cpp main.cpp )
add_executable(Nota.h Nota.cpp Collection.h Collection.cpp QuantityObserver.h QuantityObserver.cpp main.cpp)
# UNIT TESTING
# add_subdirectory(test)
