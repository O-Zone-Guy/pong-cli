
# Add libraries

add_library(Point2D STATIC
  Point2D.cpp
  headers/Point2D.h)

target_include_directories(Point2D PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/headers")

add_library(Vector2D STATIC
  Vector2D.cpp
  headers/Vector2D.h)

target_include_directories(Vector2D PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/headers")

add_library(Collider2D STATIC
  Collider2D.cpp
  headers/Collider2D.h)

target_include_directories(Collider2D PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/headers")
