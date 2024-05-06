cmake_minimum_required(VERSION 3.5)
project(Renderer VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Renderer main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

# Add your test cases
include_directories(tests src)
add_executable(tests tests/test_tuple.cpp src/tuple.h src/tuple.cpp)
add_test(NAME tests COMMAND tests)

target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
