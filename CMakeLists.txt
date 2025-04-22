cmake_minimum_required(VERSION 3.25)
project(zoo)

set(CMAKE_CXX_STANDARD 17)

add_executable(zoo main.cpp Animal.h Animal.cpp Bird.h Bird.cpp Mammal.h Mammal.cpp ZooDynamic.h ZooDynamic.cpp ZooVector.h ZooVector.cpp)