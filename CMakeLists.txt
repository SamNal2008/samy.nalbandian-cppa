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
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra -pedantic -lpython3.8")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} ${OPT_FLAGS}")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -g3 -fsanitize=address")

set(CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR} ${CMAKE_MODULE_PATH})

#PACKAGE
find_package(Pylene REQUIRED)
find_package(PythonLibs REQUIRED)
add_subdirectory(${CMAKE_SOURCE_DIR}/include/pybind11)
find_package(pybind11 REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

#add_executable(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/src/main.cpp)
pybind11_add_module(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Pylene::Pylene)
#target_link_libraries(${PROJECT_NAME}_lib PUBLIC ${PROJECT_NAME})

#target_link_libraries(${PROJECT_NAME} ${PYTHON_LIBRARIES})
