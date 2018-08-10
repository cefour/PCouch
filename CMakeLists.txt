cmake_minimum_required(VERSION 3.11)
project(PCoach)

set(CMAKE_CXX_STANDARD 17)
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME ON)
find_package(Boost  COMPONENTS system program_options thread-mt chrono )
find_library(PTHREAD pthread)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(PCoach main.cpp PCoach.cpp PCoach.h)
    target_link_libraries(PCoach ${Boost_LIBRARIES} PTHREAD)
endif()

