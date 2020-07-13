# SETUP

#set(OPT_FLAGS
#    "-Ofast"
#)

# Directories containing headers must be specified in the include_directories()
include_directories(
    "src"
)

cmake_minimum_required(VERSION 3.12)
project(cppa)

# BUILD OPTIONS
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR} ${CMAKE_MODULTE_PATH})

set(CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR} ${CMAKE_MODULE_PATH})
find_package(Pylene REQUIRED)
add_executable(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE Pylene::Pylene)
#target_link_libraries(main Pylene::Pylene)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra -pedantic")
#set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} ${OPT_FLAGS}")
#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -g3 -fsanitize=address")

#EXE
#add_executable(${PROJECT_NAME} src/main.cpp)

#TUTO
#set(CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR} ${CMAKE_MODULE_PATH})
#find_package(Pylene)
#target_link_libraries(MyTarget PRIVATE Pylene::Pylene)

#target_link_libraries(${PROJECT_NAME} CONAN_PKG::pylene)
#find_package(pylene)
#include_directories(${PYLENE_INCLUDE_DIRS})
#target_link_libraries(${PROJECT_NAME} ${PYLENE_LIBRARIES})
#find_package(pybind11)

#PYLENE
#find_package(Pylene CONFIG)
#target_link_libraries(${PROJECT_NAME} PRIVATE Pylene::Pylene)
