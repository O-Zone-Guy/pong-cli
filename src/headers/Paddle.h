#ifndef PADDLE
#define PADDLE

#include "Point2D.h"
#include <curses.h>
#include "Drawable.h"

const double SPEED = 10;

enum Direction { Up, Down };

class Paddle : Drawable {
  int len;
  Point2D pos;
  WINDOW win;

public:
  Paddle(Point2D p, WINDOW w, int l): pos(p), win(w), len(l){};
  void move(Direction dir);
  void move(float time);
  void moveTo(Point2D newPos);
  Point2D getPos(){ return pos;}
  Point2D getTop();
  Point2D getBot();
};


#endif
