#include "RightTriangle.h"
#include <cmath>
#include <iostream>

RightTriangle::RightTriangle(double leg1, double leg2)
    : Triangle(leg1, leg2, 90.0) { // Передаємо 90 градусів у базовий конструктор
}

double RightTriangle::perimeter() const {
    // Для прямокутного трикутника третя сторона (гіпотенуза): c = sqrt(a^2 + b^2)
    double hypotenuse = std::sqrt(std::pow(sideA, 2) + std::pow(sideB, 2));

    std::cout << "[RightTriangle] a=" << sideA << ", b=" << sideB
        << ", c=" << hypotenuse << std::endl;

    return sideA + sideB + hypotenuse;
}
