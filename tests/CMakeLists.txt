include(GoogleTest)

add_executable(TestPoint2D TestPoint2D.cpp)

target_link_libraries(TestPoint2D PRIVATE Point2D)
target_link_libraries(TestPoint2D PRIVATE gtest_main)

gtest_discover_tests(TestPoint2D)

add_executable(TestVector2D TestVector2D.cpp)

target_link_libraries(TestVector2D PRIVATE Vector2D)
target_link_libraries(TestVector2D PRIVATE gtest_main)

gtest_discover_tests(TestVector2D)
