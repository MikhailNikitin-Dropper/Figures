#include "Square.h"
double Square::area() const
{
    return a*a;
}

double Square::perimeter() const {
    return 4*a;
}

void Square::print(std::ostream& os) const {
    os << "Square: side = " << a;
}

Square& Square::operator=(const Figure &other) {
    if (this != &other) {
        const Square& otherSquare = dynamic_cast<const Square&>(other);
        a = otherSquare.a;
    }
    return *this;
}