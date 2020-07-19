#include "Vector2D.h"
#include "gtest/gtest.h"
#include <cmath>

class TestVector2D : public ::testing::Test {
protected:
  Vector2D pR0 {0.0, 0.0};
  Vector2D pR1 {5.0, 1.0};
  Vector2D pR2 {-3.5, M_PI/2};
  Vector2D pR3 {10.0, 3*M_PI};
  Vector2D pR4 {3.4, -5.5*M_PI};
};

TEST_F(TestVector2D, getter_X_Y){
  EXPECT_EQ(cR0.getX(), 0);
  EXPECT_EQ(cR0.getY(), 0);

  EXPECT_EQ(cR1.getX(), 10);
  EXPECT_EQ(cR1.getY(), 10);

  EXPECT_EQ(cR2.getX(), 10);
  EXPECT_EQ(cR2.getY(), 0);

  EXPECT_EQ(cR3.getX(), 0);
  EXPECT_EQ(cR3.getY(), 10);

  EXPECT_EQ(cR4.getX(), 10);
  EXPECT_EQ(cR4.getY(), -10);
}

TEST_F(TestVector2D, getter_mag_rad) {
  // get mag
  EXPECT_DOUBLE_EQ(pR0.getMag(), 0.0);
  EXPECT_DOUBLE_EQ(pR1.getMag(), 5.0);
  EXPECT_DOUBLE_EQ(pR2.getMag(), 3.5);
  EXPECT_DOUBLE_EQ(pR3.getMag(), 10.0);
  EXPECT_DOUBLE_EQ(pR4.getMag(), 3.4);

  // get rad
  EXPECT_DOUBLE_EQ(pR0.getAngle(), 0.0);
  EXPECT_DOUBLE_EQ(pR1.getAngle(), 1.0);
  EXPECT_DOUBLE_EQ(pR2.getAngle(), -M_PI/2);
  EXPECT_DOUBLE_EQ(pR3.getAngle(), M_PI);
  EXPECT_DOUBLE_EQ(pR4.getAngle(), M_PI/2);
}

