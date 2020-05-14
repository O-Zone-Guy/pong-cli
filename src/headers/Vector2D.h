#ifndef VECTOR2D
#define VECTOR2D

class Vector2D {
  int x, y;

public:
  Vector2D(int x, int y);
  double getX() const;
  double getY() const;
  double getMag() const;
  double angleBetween(const Vector2D& v);
  void   mulMag(double mag);
  void   setMag(double mag);
  void   rotate(double r);

  // operator
  bool operator==(const Vector2D other) const;
  Vector2D operator+(const Vector2D v) const;
  Vector2D operator-() const;
  double operator*(const Vector2D v) const;
};

#endif
