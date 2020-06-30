#include "headers/Ball.h"
#include "Vector2D.h"

void Ball::move(double time) {
  pos.move(vel.getX() * time, vel.getY() * time);
}

bool Ball::isAtGoal() {
  return lBound > pos.getX() || rBound < pos.getX();
}

void Ball::bounce(Vector2D n) {
  n.mulMag(2 * (vel *n));
  vel = vel + (-n);
}

void Ball::reset(Point2D p, Vector2D v) {
  pos = p;
  vel = v;
}
