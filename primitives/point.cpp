#include "point.h"

Point operator+(Point p1, Point p2) {
  Point p3;
  p3.x = p1.x + p2.x;
  p3.y = p1.y + p2.y;
  p3.z = p1.z + p2.z;
  return p3;
}

Point operator-(Point p1, Point p2) {
  Point p3;
  p3.x = p1.x - p2.x;
  p3.y = p1.y - p2.y;
  p3.z = p1.z - p2.z;
  return p3;
}

int pdist(Point p1, Point p2) {
  return sqrt(
	      (p1.x - p2.x) * (p1.x - p2.x) +
	      (p1.y - p2.y) * (p1.y - p2.y) +
	      (p1.z - p2.z) * (p1.z - p2.z)
	      );
}
