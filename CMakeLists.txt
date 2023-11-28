cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Tutorial VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
find_package(Threads REQUIRED)
# set configure file
configure_file(TutorialConfig.h.in TutorialConfig.h)

# add the executable
add_executable(Tutorial main.cpp)

target_include_directories(Tutorial PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )

target_link_libraries(Tutorial Threads::Threads)

