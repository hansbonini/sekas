project(tests)

include_directories(../include)
add_subdirectory(lib)

include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(unit_tests adder/adder_tests.cpp)

target_link_libraries(unit_tests libsekas)
target_link_libraries(unit_tests gtest gtest_main)
target_link_libraries(unit_tests gmock gmock_main)