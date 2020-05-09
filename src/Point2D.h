#ifndef POINT2D
#define POINT2D


class Point2D {
  int x, y;
 public:
  Point2D(int x, int y);
  int getX();
  int getY();
  void move(int dx, int dy);
  void moveTo(int x, int y);
  int compareTo(Point2D* p2);
};

#endif
