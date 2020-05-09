#ifndef VECTOR2D
#define VECTOR2D

class Vector2D {
  int x, y;

public:
  Vector2D(int x, int y);
  double getX();
  double getY();
  double getMag();
  double angleBetween(Vector2D* v);
  void mulMag(double mag);
  void setMag(double mag);
  void rotate(double r);
  Vector2D* add(Vector2D* v);
  double prod(Vector2D* v);
};

#endif
