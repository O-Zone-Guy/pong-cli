#include "headers/Vector2D.h"
#include "math.h"

Vector2D::Vector2D(int x, int y): x{x}, y{y} {};

double Vector2D::getX() const { return x;};

double Vector2D::getY() const { return y;};

double Vector2D::getMag() const {
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

Vector2D Vector2D::operator+(const Vector2D v) const {
  return Vector2D(this->getX() + v.getX(),
                  this->getY() + v.getY());
}

Vector2D Vector2D::operator-() const {
  return Vector2D{(int)-this->getX(), (int)-this->getY()};
};

double Vector2D::operator*(const Vector2D v) const {
  return this->getX() * v.getX() + this->getY() * v.getY();
}

bool Vector2D::operator==(const Vector2D other) const {
  return this->getX() == other.getX() && this->getY() == other.getY();
}
