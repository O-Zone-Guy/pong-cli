#include "headers/Collider2D.h"
#include "headers/Point2D.h"
#include <stdexcept>

Collider2D::Collider2D (Point2D p1, Point2D p2): min{p1}, max{p2} {

  if (min.compareTo(&max) == 1){
    throw std::invalid_argument("Min point is larger than max point.");
  }

}

bool Collider2D::isColliding(Collider2D* object) {

  if (object->min.compareTo(&(this->max)) != 1 &&
      object->min.compareTo(&(this->min)) != -1)
    return true;

  else if (object->max.compareTo(&(this->max)) != 1 &&
           object->max.compareTo(&(this->min)) != -1)
    return true;

  return false;

}
