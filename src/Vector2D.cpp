#include "Vector2D.h"
#include "math.h"

Vector2D::Vector2D(int x, int y): x{x}, y{y} {};

double Vector2D::getX() { return x;};

double Vector2D::getY() { return y;};

double Vector2D::getMag() {
  return sqrt(pow(x, 2) + pow(y, 2));
}

void Vector2D::mulMag(double mag) {
  x *= mag;
  y *= mag;
}

void Vector2D::setMag(double mag) {
  x *= (this->getMag() / mag);
  y *= (this->getMag() / mag);
}

void Vector2D::rotate(double r) {
  x = x * cos(r) - y * sin(r);
  y = x * sin(r) + y * cos(r);
}

Vector2D* Vector2D::add(Vector2D* v){
  return new Vector2D(this->getX() + v->getX(),
                      this->getY() + v->getY());
}

double Vector2D::prod(Vector2D* v){
  return this->getX() * v->getX() + this->getY() * v->getY();
}