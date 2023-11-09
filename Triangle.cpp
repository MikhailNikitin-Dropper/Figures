#include "Triangle.h"
#include <cmath>
double Triangle::area() const {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
double Triangle::perimeter() const {
    return a + b + c;
}
void Triangle::print(std::ostream &os) const {
    os << "Triangle: side1=" << a << ", side2=" << b << ", side3=" << c;
}
Triangle& Triangle::operator=(const Figure& other) {
    if (this != &other) {
        const Triangle& otherTriangle = dynamic_cast<const Triangle&>(other);
        a = otherTriangle.a;
        b = otherTriangle.b;
        c = otherTriangle.c;
    }
    return *this;
}

