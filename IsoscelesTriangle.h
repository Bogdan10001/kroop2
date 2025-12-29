#ifndef ISOSCELES_TRIANGLE_H
#define ISOSCELES_TRIANGLE_H

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    // Приймаємо довжину рівних сторін і кут між ними
    IsoscelesTriangle(double equalSide, double angle);

    double perimeter() const override;
};

#endif
