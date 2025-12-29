#include "IsoscelesTriangle.h"
#include <cmath>
#include <iostream>

IsoscelesTriangle::IsoscelesTriangle(double equalSide, double angle)
    : Triangle(equalSide, equalSide, angle) { // Сторони А і В рівні
}

double IsoscelesTriangle::perimeter() const {
    // Теорема косинусів: c = sqrt(a^2 + b^2 - 2ab * cos(angle))
    // Оскільки a == b, то: c = sqrt(2a^2 - 2a^2 * cos(angle))

    double angleRad = toRadians(angleDegrees);
    double thirdSide = std::sqrt(std::pow(sideA, 2) + std::pow(sideB, 2)
        - 2 * sideA * sideB * std::cos(angleRad));

    std::cout << "[IsoscelesTriangle] equal sides=" << sideA
        << ", base=" << thirdSide << std::endl;

    return sideA + sideB + thirdSide;
}
