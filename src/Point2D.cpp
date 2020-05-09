#include "Point2D.h"

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
  if (p->getX() == this->getX())
    if (p->getY() == this->getY())
      return 0;
    else if (p->getY() < this->getY())
      return -1;
    else
      return 1;
  else if (p->getX() < this->getX())
    return -1;
  return 1;
}
