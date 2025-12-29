#include "Triangle.h"
#include <cmath>

// Константа PI для математичних обчислень
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

Triangle::Triangle(double a, double b, double angle)
    : sideA(a), sideB(b), angleDegrees(angle) {
}

double Triangle::toRadians(double degrees) const {
    return degrees * (M_PI / 180.0);
}
