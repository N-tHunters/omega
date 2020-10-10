#ifndef POLYHEDRON_H
#define POLYHEDRON_H

#include <vector>
#include "polygon.h"

class Polyhedron {
 private:
  std::vector<Polygon> faces;
 public:
  Polyhedron(std::vector<Polygon> * faces);
};

#endif
