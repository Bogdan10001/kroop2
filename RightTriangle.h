#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

#include "Triangle.h"

class RightTriangle : public Triangle {
public:
    // Конструктор приймає два катети, кут автоматично 90
    RightTriangle(double leg1, double leg2);

    // Перевизначення функції периметра
    double perimeter() const override;
};

#endif
