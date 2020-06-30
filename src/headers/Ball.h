#ifndef BALL
#define BALL

#include "Drawable.h"
#include "Vector2D.h"
#include "Point2D.h"
#include <curses.h>

class Ball : Drawable {

  Point2D pos;
  Vector2D vel;
  int lBound;
  int rBound;
  WINDOW win;

public:
  Ball(Point2D p, Vector2D v, int lB, int rB, WINDOW w)
    : pos(p), vel(v), lBound(lB), rBound(rB), win(w) {};
  void move(double);
  bool isAtGoal();
  void bounce(Vector2D);
  void reset(Point2D, Vector2D);

};

#endif
