#include "Vector2D.h"
#include "gtest/gtest.h"

class TestVector2D : public ::testing::Test {
protected:
  Vector2D vR0 {0, 0};
  Vector2D vR1 {10, 10};
  Vector2D vR2 {10, 0};
  Vector2D vR3 {0, 10};
  Vector2D vR4 {10, -10};
};

TEST_F(TestVector2D, getter_X_Y){
  ASSERT_NEAR(vR0.getX(), 0, 1E-12);
  ASSERT_NEAR(vR0.getY(), 0, 1E-12);

  ASSERT_NEAR(vR1.getX(), 10, 1E-12);
  ASSERT_NEAR(vR1.getY(), 10, 1E-12);

  ASSERT_NEAR(vR2.getX(), 10, 1E-12);
  ASSERT_NEAR(vR2.getY(), 0, 1E-12);

  ASSERT_NEAR(vR3.getX(), 0, 1E-12);
  ASSERT_NEAR(vR3.getY(), 10, 1E-12);

  ASSERT_NEAR(vR4.getX(), 10, 1E-12);
  ASSERT_NEAR(vR4.getY(), -10, 1E-12);
}
