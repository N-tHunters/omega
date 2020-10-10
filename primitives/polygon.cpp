#include "polygon.h"

Polygon::Polygon(std::vector<Point> * verts) {
  this->verts.clear();
  for(int i = 0; i < verts->size(); i++)
    this->verts.push_back(verts->at(i));
}
