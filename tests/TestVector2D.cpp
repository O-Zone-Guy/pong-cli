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
  EXPECT_NEAR(pR0.getX(), 0.0, 1E-12);
  EXPECT_NEAR(pR0.getY(), 0.0, 1E-12);

  EXPECT_NEAR(pR2.getX(), 0.0, 1E-12);
  EXPECT_NEAR(pR2.getY(), -3.5, 1E-12);

  EXPECT_NEAR(pR3.getX(), -10.0, 1E-12);
  EXPECT_NEAR(pR3.getY(), 0.0, 1E-12);

  EXPECT_NEAR(pR4.getX(), 0.0, 1E-12);
  EXPECT_NEAR(pR4.getY(), 3.4, 1E-12);
}

TEST_F(TestVector2D, getter_mag_rad) {
  // get mag
  ASSERT_NEAR(pR0.getMag(), 0.0, 1E-12);
  ASSERT_NEAR(pR1.getMag(), 5.0, 1E-12);
  ASSERT_NEAR(pR2.getMag(), 3.5, 1E-12);
  ASSERT_NEAR(pR3.getMag(), 10.0, 1E-12);
  ASSERT_NEAR(pR4.getMag(), 3.4, 1E-12);

  // get rad
  ASSERT_NEAR(pR0.getAngle(), 0.0, 1E-12);
  ASSERT_NEAR(pR1.getAngle(), 1.0, 1E-12);
  ASSERT_NEAR(pR2.getAngle(), -M_PI/2, 1E-12);
  ASSERT_NEAR(pR3.getAngle(), M_PI, 1E-12);
  ASSERT_NEAR(pR4.getAngle(), M_PI/2, 1E-12);
}

