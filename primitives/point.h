#ifndef POINT_H
#define POINT_H

#include <math.h>

struct Point {
  int x, y, z;
};

Point operator+(Point p1, Point p2);
Point operator-(Point p1, Point p2);
int pdist(Point p1, Point p2);

#endif
