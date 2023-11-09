#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Ellipse.h"
int main() {
    Circle circle(5);
    std::cout << "Circle area: " << circle.area() << std::endl;
    std::cout << "Circle perimeter: " << circle.perimeter() << std::endl;
    std::cout  << circle << std::endl;

    Rectangle rectangle(3, 4);
    std::cout << "Rectangle area: " << rectangle.area() << std::endl;
    std::cout << "Rectangle perimeter: " << rectangle.perimeter() << std::endl;
    std::cout << "Rectangle details: " << rectangle << std::endl;

    Triangle triangle(3, 4, 5);
    std::cout << "Triangle area: " << triangle.area() << std::endl;
    std::cout << "Triangle perimeter: " << triangle.perimeter() << std::endl;
    std::cout << "Triangle details: " << triangle << std::endl;

    Ellipse ellipse(4, 3);
    std::cout << "Ellipse area: " << ellipse.area() << std::endl;
    std::cout << "Ellipse perimeter: " << ellipse.perimeter() << std::endl;
    std::cout << "Ellipse details: " << ellipse << std::endl;
    return 0;
}
