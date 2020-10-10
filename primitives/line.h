#ifndef LINE_H
#define LINE_H

struct Line {
  Point p1;
  Point p2;
};

bool intersection(Line l1, Line l2);

#endif
