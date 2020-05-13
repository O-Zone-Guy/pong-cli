#ifndef COLLIDER2D
#define COLLIDER2D

#include <vector>
#include "Point2D.h"

class Collider2D {

  Point2D min;
  Point2D max;

public:
  Collider2D(Point2D p1, Point2D p2);
  virtual void collideEvent(const std::vector<Collider2D>* colliders) = 0;
  virtual bool isColliding(Collider2D* object);

};

#endif
