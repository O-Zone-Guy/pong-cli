#include "Paddle.h"
#include "Drawable.h"
#include "Point2D.h"
#include <math.h>
#include <curses.h>

void Paddle::move(Direction dir) {
  this->dir = dir;
}

void Paddle::move(float time) {
  switch (dir) {
  case Up:
    pos.move(0, time * - SPEED);
  case Down:
    pos.move(0, time * SPEED);
  case None:
    return;
  }
}

void Paddle::moveTo(Point2D p) {
  this->pos = p;
}

Point2D Paddle::getTop() {
  return Point2D(getPos().getX(),
                 getPos().getX() - floor(len/2));
}

Point2D Paddle::getBot() {
  return Point2D(getPos().getX(),
                 getPos().getY() + floor(len/2));
}

/*
 * Still not sure how to use the WINDOW API, need more research.
 */
void Paddle::draw(WINDOW w) {

}
