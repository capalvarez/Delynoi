#ifndef DELYNOI_DELYNOIUTILITIES_H
#define DELYNOI_DELYNOIUTILITIES_H

#include <vector>
#include <iostream>
#include <delynoi/models/basic/Point.h>
#include <utilities/Pair.h>

namespace xpoly_utilities {
    extern void TrivialIndexVector(std::vector<int>& index_vector, int n);
    extern double crossProduct(Point a, Point b);
    extern double norm(Point p);
    extern double squareNorm(Point p);
    extern double orientation(Point p, Point q, Point r);
}
#endif