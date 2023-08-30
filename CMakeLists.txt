cmake_minimum_required(VERSION 3.24)
project(Notepad)

set(CMAKE_CXX_STANDARD 14)

add_executable(Notepad main.cpp Nota.h Nota.cpp Collection.h Collection.cpp Observer.h Subject.h QuantityObserver.h QuantityObserver.cpp Google_tests/Testmain.cpp Google_tests/TestNota.cpp Google_tests/TestQuantityObserver.cpp)
add_subdirectory(Google_tests)