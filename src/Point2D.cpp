#include "headers/Point2D.h"

Point2D::Point2D(int x, int y) : x{x}, y{y} {};

int Point2D::getX() { return x;};

int Point2D::getY() { return y;};

void Point2D::move(int dx, int dy) {
  x += dx;
  y += dy;
}

void Point2D::moveTo(int x, int y) {
  this->x = x;
  this->y = y;
}

int Point2D::compareTo(Point2D* p) {
  if (this->getX() == p->getX())
    if (this->getY() == p->getY())
      return 0;
    else if (this->getY() < p->getY())
      return -1;
    else
      return 1;
  else if (this->getX() < p->getX())
    return -1;
  return 1;
}
