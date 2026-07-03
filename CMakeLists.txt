cmake_minimum_required(VERSION 3.16)
project(CinderWatch VERSION 0.1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_library(cinderwatch
src/core/core.cpp src/core/core_profiles.cpp src/core/core_expanded.cpp
src/packet/packet.cpp src/packet/packet_profiles.cpp src/packet/packet_expanded.cpp
src/ioc/ioc.cpp src/ioc/ioc_profiles.cpp src/ioc/ioc_expanded.cpp
src/rules/firewall.cpp src/rules/ids.cpp src/rules/rules_profiles.cpp src/rules/rules_expanded.cpp
src/policy/policy.cpp src/policy/policy_profiles.cpp src/policy/policy_expanded.cpp
src/cli/cli.cpp src/cli/cli_profiles.cpp src/cli/cli_expanded.cpp)
target_include_directories(cinderwatch PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
add_executable(cinderwatch_cli src/cli/main.cpp)
target_link_libraries(cinderwatch_cli PRIVATE cinderwatch)
set_target_properties(cinderwatch_cli PROPERTIES OUTPUT_NAME cinderwatch)
enable_testing()
add_executable(cinderwatch_tests tests/basic_tests.cpp)
target_link_libraries(cinderwatch_tests PRIVATE cinderwatch)
add_test(NAME cinderwatch_basic COMMAND cinderwatch_tests)
