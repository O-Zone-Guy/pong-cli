#include "headers/Vector2D.h"
#include <math.h>
#include <stdexcept>
#include <cmath>

Vector2D::Vector2D(int x, int y) {
  mag = sqrt(x*x + y*y);
  rad = atan2(y, x);
}

Vector2D::Vector2D(double rad, double mag) {
  if (mag < 0){
    mag = - mag;
    rad += M_PI;
  }
  this->mag = mag;

  if (rad > M_PI)
    this->rad = std::fmod(rad, 2*M_PI) - 2*M_PI;
  else if (rad <= -M_PI)
    this->rad = std::fmod(rad, 2 * M_PI) + 2 * M_PI;
  else
    this->rad = rad;
}

int Vector2D::getX() const {
  return (int) std::round(mag * cos(rad));
}

int Vector2D::getY() const {
  return (int) std::round(mag * sin(rad));
}

double Vector2D::getMag() const { return mag;}

void Vector2D::mulMag(double mag) { this->mag*= mag; };

void Vector2D::setMag(double mag) { this->mag = mag; };

void Vector2D::addMag(double dMag) { this->mag += dMag;};

void Vector2D::addX(double dx) {
  double x = this->getX() + dx;
  double y = this->getY();

  this->mag = sqrt(x*x + y*y);
  this->rad = atan2(y, x);
}

void Vector2D::addY(double dy) {
  double x = this->getX();
  double y = this->getY() + dy;

  this->mag = sqrt(x*x + y*y);
  this->rad = atan2(y, x);
}

void Vector2D::rotate(double rad) {
  double newRad = this->rad + rad;
  if (newRad > M_PI)
    this->rad = std::fmod(newRad, 2*M_PI) - 2*M_PI;
   else if (newRad <= -M_PI)
    this->rad = std::fmod(newRad, 2 * M_PI) + 2 * M_PI;
   else
    this->rad = newRad;
};

double Vector2D::angleBetween(const Vector2D& v) const {
  return v.rad - this->rad;
}

Vector2D Vector2D::operator+(const Vector2D& v) const {
  return Vector2D(this->getX() + v.getX(),
                  this->getY() + v.getY());
}

Vector2D Vector2D::operator-() const {
  return Vector2D{-this->mag, this->rad};
};

double Vector2D::operator*(const Vector2D& v) const {
  return this->getX() * v.getX() + this->getY() * v.getY();
}

bool Vector2D::operator==(const Vector2D& other) const {
  return this->mag == other.mag && this->rad == other.rad;
}
