#ifndef DRAWABLE
#define DRAWABLE

#include <curses.h>

class Drawable {
public:
  virtual void draw(WINDOW) = 0;
};

#endif
