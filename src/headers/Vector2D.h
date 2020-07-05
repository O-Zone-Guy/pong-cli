#ifndef VECTOR2D
#define VECTOR2D

class Vector2D {
  double  rad, mag; // rad: radians degrees, mag: magnitude
  double round(double) const;

public:
  Vector2D(int, int);
  Vector2D(double, double);
  int getX() const;
  int getY() const;
  double getMag() const;
  void mulMag(double);
  void setMag(double);
  void addMag(double);
  void addX(double);
  void addY(double);
  void rotate(double);
  double angleBetween(const Vector2D&) const;

  // operator
  bool operator==(const Vector2D&) const;
  Vector2D operator+(const Vector2D&) const;
  Vector2D operator-() const;
  double operator*(const Vector2D&) const;
};

#endif
