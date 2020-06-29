#include "headers/Vector2D.h"
#include <math.h>
#include <stdexcept>
#include <cmath>

Vector2D::Vector2D(int x, int y) {
  mag = sqrt(x*x + y*y);
  rad = atan2(y, x);
}

Vector2D::Vector2D(double rad, double mag) {
  rad = std::fmod(rad, 2*M_PI);
  this->rad = rad > M_PI ? - (rad - M_PI) : rad;

  if (mag < 0){
    mag = - mag;
    this->rad = - this->rad;
  }

  this->mag = mag;
}

double Vector2D::getX() const {
  return round(mag * cos(rad));
}

double Vector2D::getY() const {
  return round(mag * sin(rad));
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

void Vector2D::rotate(double rad) { this->rad += rad; };

double Vector2D::angleBetween(const Vector2D& v) const {
  return v.rad - this->rad;
}

Vector2D Vector2D::operator+(const Vector2D& v) const {
  return Vector2D(this->getX() + v.getX(),
                  this->getY() + v.getY());
}

Vector2D Vector2D::operator-() const {
  return Vector2D{this->mag, -this->rad};
};

double Vector2D::operator*(const Vector2D& v) const {
  return round(this->getX() * v.getX() + this->getY() * v.getY());
}

bool Vector2D::operator==(const Vector2D& other) const {
  return this->mag == other.mag && this->rad == other.rad;
}

double Vector2D::round(double x) const{
  double val = x;
  val *= 1E12;
  val = val > 0 ? ceil(val - 0.5) : floor(val +  0.5);
  return val / 1E12;
}
