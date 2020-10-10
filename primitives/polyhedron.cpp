#include "polyhedron.h"

Polyhedron::Polyhedron(std::vector<Polygon> * faces) {
  this->faces.clear();
  for(int i = 0; i < faces->size(); i++)
    this->faces.push_back(faces->at(i));
}
