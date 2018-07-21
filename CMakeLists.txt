cmake_minimum_required(VERSION 3.8)
project(LMS)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        createrecord.cpp
        createrecord.h
        main.cpp
        signin.cpp
        signin.h obj/search.h obj/search.cpp obj/issue.h obj/issue.cpp obj/ret.h obj/ret.cpp help.h help.cpp obj/record.cpp obj/record.h)
SET(CMAKE_FIND_LIBRARY_SUFFIXES ".a")
SET(BUILD_SHARED_LIBRARIES OFF)
SET(CMAKE_EXE_LINKER_FLAGS "-static")
add_executable(LMS ${SOURCE_FILES})