#include <cmath>
#include "Figure.h"
#include "Circle.h"
double Circle::area() const  {
    return M_PI * radius * radius;
}

double Circle::perimeter() const  {
    return 2 * M_PI * radius;
}

void Circle::print(std::ostream& os) const  {
    os << "Circle: radius=" << radius;
}

Circle& Circle::operator=(const Figure& other) {
    if (this != &other) {
        const Circle& otherCircle = dynamic_cast<const Circle&>(other);
        radius = otherCircle.radius;
    }
    return *this;
}
