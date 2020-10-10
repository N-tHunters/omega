#ifndef POLYGON_H
#define POLYGON_H

#include "point.h"
#include <vector>

class Polygon {
 private:
  std::vector<Point> verts;
 public:
  Polygon(std::vector<Point> * verts);
};

#endif
