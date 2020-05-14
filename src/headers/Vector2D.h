#ifndef VECTOR2D
#define VECTOR2D

class Vector2D {
  int x, y;

public:
  Vector2D(int x, int y);
  double getX() const;
  double getY() const;
  double getMag() const;
  double angleBetween(const Vector2D&) const;
  void   mulMag(double);
  void   setMag(double);
  void   rotate(double);

  // operator
  bool operator==(const Vector2D&) const;
  Vector2D operator+(const Vector2D&) const;
  Vector2D operator-() const;
  double operator*(const Vector2D&) const;
};

#endif
