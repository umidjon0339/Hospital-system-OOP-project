cmake_minimum_required(VERSION 3.10)
project(Team_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Team_project
        main.cpp
        Person.cpp
        Patient.cpp
        Doctor.cpp
        Disease.cpp
        Medicine.cpp
        Record.cpp
        Room.h
        Room.cpp
)