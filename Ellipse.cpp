#include "Ellipse.h"
#include "Circle.h"
#include "cmath"
double Ellipse::area() const {
    return M_PI * a * b;
}
double Ellipse::perimeter() const {
    return 2 * M_PI * sqrt((a * a + b * b) / 2);
}

void Ellipse::print(std::ostream &os) const {
    os << "Ellipse: semi-major axis=" << a << ", semi-minor axis=" << b;
}

Ellipse& Ellipse::operator=(const Figure &other) {
    if (this != &other) {
        const Ellipse& otherEllipse = dynamic_cast<const Ellipse&>(other);
        a = otherEllipse.a;
        b = otherEllipse.b;
    }
    return *this;
}
