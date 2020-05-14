#include "gtest/gtest.h"
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

TEST_F(TestPoint2D, Move) {
  ASSERT_EQ(p0.getX(), 0);
  ASSERT_EQ(p0.getY(), 0);
  p0.move(3, 3);
  ASSERT_EQ(p0.getX(), 3);
  ASSERT_EQ(p0.getY(), 3);


  ASSERT_EQ(p1.getX(), 10);
  ASSERT_EQ(p1.getY(), 5);
  p1.move(3, 2);
  ASSERT_EQ(p1.getX(), 13);
  ASSERT_EQ(p1.getY(), 7);

  ASSERT_EQ(p2.getX(), -10);
  ASSERT_EQ(p2.getY(), -5);
  p2.move(3, 3);
  ASSERT_EQ(p2.getX(), -7);
  ASSERT_EQ(p2.getY(), -2);
}

TEST_F(TestPoint2D, MoveNeg) {
  ASSERT_EQ(p0.getX(), 0);
  ASSERT_EQ(p0.getY(), 0);
  p0.move(-3, -3);
  ASSERT_EQ(p0.getX(), -3);
  ASSERT_EQ(p0.getY(), -3);


  ASSERT_EQ(p1.getX(), 10);
  ASSERT_EQ(p1.getY(), 5);
  p1.move(-3, -2);
  ASSERT_EQ(p1.getX(), 7);
  ASSERT_EQ(p1.getY(), 3);

  ASSERT_EQ(p2.getX(), -10);
  ASSERT_EQ(p2.getY(), -5);
  p2.move(-3, -2);
  ASSERT_EQ(p2.getX(), -13);
  ASSERT_EQ(p2.getY(), -7);
}

TEST_F(TestPoint2D, MoveTo) {
  ASSERT_EQ(p0.getX(), 0);
  ASSERT_EQ(p0.getY(), 0);
  p0.moveTo(3, 4);
  ASSERT_EQ(p0.getX(), 3);
  ASSERT_EQ(p0.getY(), 4);

  ASSERT_EQ(p1.getX(), 10);
  ASSERT_EQ(p1.getY(), 5);
  p1.moveTo(6, 4);
  ASSERT_EQ(p1.getX(), 6);
  ASSERT_EQ(p1.getY(), 4);

  ASSERT_EQ(p2.getX(), -10);
  ASSERT_EQ(p2.getY(), -5);
  p2.moveTo(9, -10);
  ASSERT_EQ(p2.getX(), 9);
  ASSERT_EQ(p2.getY(), -10);
}
