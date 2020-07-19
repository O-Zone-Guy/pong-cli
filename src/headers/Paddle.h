#ifndef PADDLE
#define PADDLE

#include "Point2D.h"
#include <curses.h>
#include "Drawable.h"

const double SPEED = 10;

enum Direction { Up, Down, None};

class Paddle : public Drawable {
  int len;
  Point2D pos;
  WINDOW win;
  Direction dir;

public:
  Paddle(Point2D p, WINDOW w, int l): pos(p), win(w), len(l){};
  void move(Direction);
  void move(float);
  void moveTo(Point2D);
  Point2D getPos(){ return pos;}
  Point2D getTop();
  Point2D getBot();
  void draw(WINDOW) override;
};


#endif
