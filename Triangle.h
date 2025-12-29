#ifndef TRIANGLE_H
#define TRIANGLE_H

// Абстрактний базовий клас
class Triangle {
protected:
    double sideA;
    double sideB;
    double angleDegrees; // Кут між сторонами в градусах

public:
    // Конструктор
    Triangle(double a, double b, double angle);

    // Віртуальний деструктор (важливо для спадкування)
    virtual ~Triangle() {}

    // Чиста віртуальна функція (робить клас абстрактним)
    virtual double perimeter() const = 0;

    // Допоміжна функція для переведення градусів у радіани
    double toRadians(double degrees) const;
};

#endif
