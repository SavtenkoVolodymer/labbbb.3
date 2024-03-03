cmake_minimum_required(VERSION 3.27)
project(Lab)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab main.cpp
        Client.cpp
        Client.h
        Hotel.cpp
        Hotel.h
        StuffMember.cpp
        StuffMember.h
        Admin.cpp
        Admin.h)
