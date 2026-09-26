cmake_minimum_required(VERSION 3.22)
project(backtester LANGUAGES CXX)

set(CMAKE_CXX_EXTENSIONS OFF)

option(BT_SANITIZE "Build with AddressSanitizer and UndefinedBehaviourSanitizer" OFF)
if (BT_SANITIZE)
    add_compile_options(-fsanitize=address,undefined -fno-omit-frame-pointer)
    add_compile_options(-fno-sanitize-recover=all)
    add_link_options(-fsanitize=address,undefined)
endif()

add_library(bt src/price.cpp)
target_include_directories(bt PUBLIC include)
target_compile_features(bt PUBLIC cxx_std_20)
target_compile_options(bt PRIVATE -Wall -Wextra -Wpedantic)

# Tests
enable_testing()
find_package(GTest REQUIRED)

add_executable(bt_tests tests/test_price.cpp)
target_link_libraries(bt_tests PRIVATE bt GTest::gtest_main)
target_compile_options(bt_tests PRIVATE -Wall -Wextra -Wpedantic)

include(GoogleTest)
gtest_discover_tests(bt_tests)
