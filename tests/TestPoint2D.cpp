#include <gtest/gtest.h>
#include "../src/headers/Point2D.h"

class TestPoint2D : public ::testing::Test {
protected:
  Point2D p0{0, 0};
  Point2D p1{10, 5};
  Point2D p2{-10, -5};
};

TEST_F(TestPoint2D, Getter) {
  ASSERT_EQ(p0.getX(), 0);
  ASSERT_EQ(p1.getX(), 10);
  ASSERT_EQ(p2.getX(), -10);

  ASSERT_EQ(p0.getY(), 0);
  ASSERT_EQ(p1.getY(), 5);
  ASSERT_EQ(p2.getY(), -5);
}

TEST_F(TestPoint2D, Comparison) {
  ASSERT_EQ(p0.compareTo(&p0), 0);
  ASSERT_EQ(p1.compareTo(&p1), 0);
  ASSERT_EQ(p2.compareTo(&p2), 0);

  ASSERT_EQ(p0.compareTo(&p1), -1);
  ASSERT_EQ(p0.compareTo(&p2), 1);

  ASSERT_EQ(p1.compareTo(&p0), 1);
  ASSERT_EQ(p1.compareTo(&p2), 1);

  ASSERT_EQ(p2.compareTo(&p0), -1);
  ASSERT_EQ(p2.compareTo(&p1), -1);
}
