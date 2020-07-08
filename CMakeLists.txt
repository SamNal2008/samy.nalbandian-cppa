# SETUP

set(OPT_FLAGS
    "-Ofast"
)

# Directories containing headers must be specified in the include_directories()
include_directories(
    "src"
)

cmake_minimum_required(VERSION 3.12)
project(Cppa)

# BUILD OPTIONS
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra -pedantic")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} ${OPT_FLAGS}")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -g3 -fsanitize=address")


#PYLENE
find_package(Pylene CONFIG)
target_link_libraries(Cppa PRIVATE Pylene::Pylene)

#add_test(MyTests test.cc)
#add_custom_target(test COMMAND ${CMAKE_CTEST_COMMAND}
  DEPENDS test1.cc)

#EXE
add_executable(Cppa src/main.cc)


# TESTS
# Check if GTest is installed
find_package(GTest)



# If it is, create a dedicated target "tests"
if(GTest_FOUND)
  include(GoogleTest)

  add_executable(tests)
  target_sources(tests PRIVATE
    ${SRC_GTEST}
    ${SRC_ENGINE}
  )
  target_compile_options(tests PRIVATE -Wall -Werror -Wextra)
  target_link_libraries(tests PRIVATE GTest::GTest ${LIBRARIES})
endif()
