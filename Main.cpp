#include <iostream>
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"

// --- ЗАВДАННЯ 3: Шаблонна функція ---
/*
  Приймає масив за посиланням (щоб знати його розмір N).
  Обчислює суму в змінну sum (передану за посиланням).
  Повертає кількість елементів (N).
*/
template <typename T, size_t N>
size_t processArray(const T(&arr)[N], T& sum) {
    sum = 0; // Обнуляємо суму
    for (size_t i = 0; i < N; ++i) {
        sum += arr[i];
    }
    return N; // Повертаємо кількість елементів
}

int main() {
    // ==========================================
    // ДЕМОНСТРАЦІЯ ЗАВДАННЯ 2 (Класи)
    // ==========================================
    std::cout << "=== TASK 2: Triangles ===" << std::endl;

    // Прямокутний трикутник (катети 3 і 4, гіпотенуза має бути 5)
    Triangle* t1 = new RightTriangle(3.0, 4.0);
    std::cout << "Perimeter of Right Triangle: " << t1->perimeter() << std::endl;
    std::cout << "-------------------------" << std::endl;

    // Рівнобедрений трикутник (сторони 10, кут 60 градусів -> це буде рівносторонній)
    Triangle* t2 = new IsoscelesTriangle(10.0, 60.0);
    std::cout << "Perimeter of Isosceles Triangle: " << t2->perimeter() << std::endl;

    // Очищення пам'яті
    delete t1;
    delete t2;
    std::cout << "\n\n";

    // ==========================================
    // ДЕМОНСТРАЦІЯ ЗАВДАННЯ 3 (Шаблони)
    // ==========================================
    std::cout << "=== TASK 3: Templates ===" << std::endl;

    // 1. Інстанціювання для int
    int intArr[] = { 1, 2, 3, 4, 5 };
    int intSum = 0;
    size_t intCount = processArray(intArr, intSum);

    std::cout << "Integer Array: {1, 2, 3, 4, 5}" << std::endl;
    std::cout << "Count: " << intCount << std::endl;
    std::cout << "Sum: " << intSum << std::endl;
    std::cout << "-------------------------" << std::endl;

    // 2. Інстанціювання для double
    double doubleArr[] = { 2.5, 3.5, 4.0 };
    double doubleSum = 0.0;
    size_t doubleCount = processArray(doubleArr, doubleSum);

    std::cout << "Double Array: {2.5, 3.5, 4.0}" << std::endl;
    std::cout << "Count: " << doubleCount << std::endl;
    std::cout << "Sum: " << doubleSum << std::endl;

    return 0;
}
