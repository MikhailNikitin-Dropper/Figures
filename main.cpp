#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Ellipse.h"
#include "Square.h"
int main() {
    Circle circle(5);
    std::cout << "Circle area: " << circle.area() << std::endl;
    std::cout << "Circle perimeter: " << circle.perimeter() << std::endl;
    std::cout  << circle << std::endl;

    Circle circle1;
    std::cout << "Circle area: " << circle1.area() << std::endl;
    std::cout << "Circle perimeter: " << circle1.perimeter() << std::endl;
    std::cout  << circle1 << std::endl;

    Rectangle rectangle(3, 4);
    std::cout << "Rectangle area: " << rectangle.area() << std::endl;
    std::cout << "Rectangle perimeter: " << rectangle.perimeter() << std::endl;
    std::cout << "Rectangle details: " << rectangle << std::endl;

    Rectangle rectangle1;
    std::cout << "Rectangle area: " << rectangle1.area() << std::endl;
    std::cout << "Rectangle perimeter: " << rectangle1.perimeter() << std::endl;
    std::cout << "Rectangle details: " << rectangle1 << std::endl;

    Triangle triangle(3, 4, 5);
    std::cout << "Triangle area: " << triangle.area() << std::endl;
    std::cout << "Triangle perimeter: " << triangle.perimeter() << std::endl;
    std::cout << "Triangle details: " << triangle << std::endl;

    Triangle triangle1;
    std::cout << "Triangle area: " << triangle1.area() << std::endl;
    std::cout << "Triangle perimeter: " << triangle1.perimeter() << std::endl;
    std::cout << "Triangle details: " << triangle1 << std::endl;

    Ellipse ellipse(4, 3);
    std::cout << "Ellipse area: " << ellipse.area() << std::endl;
    std::cout << "Ellipse perimeter: " << ellipse.perimeter() << std::endl;
    std::cout << "Ellipse details: " << ellipse << std::endl;

    Ellipse ellipse1;
    std::cout << "Ellipse area: " << ellipse1.area() << std::endl;
    std::cout << "Ellipse perimeter: " << ellipse1.perimeter() << std::endl;
    std::cout << "Ellipse details: " << ellipse1 << std::endl;

    Square square(5);
    std::cout << "Square area: " << square.area() << std::endl;
    std::cout << "Square perimeter: " << square.perimeter() << std::endl;
    std::cout << "Square details: " << square << std::endl;

    Square square1;
    std::cout << "Square area: " << square1.area() << std::endl;
    std::cout << "Square perimeter: " << square1.perimeter() << std::endl;
    std::cout << "Square details: " << square1 << std::endl;

    std::cout << "Square area: " << square1.area() << std::endl;
    std::cout << "Square perimeter: " << square1.perimeter() << std::endl;
    std::cout << "Square details: " << square1 << std::endl;

    square1=square;
    return 0;
}
