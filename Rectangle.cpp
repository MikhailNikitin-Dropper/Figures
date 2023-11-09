#include "Rectangle.h"

double Rectangle::area() const {
        return width * height;
    }

double Rectangle::perimeter() const {
    return 2 * (width + height);
}

void Rectangle::print(std::ostream &os) const
{
    os << "Rectangle: width=" << width << ", height=" << height;
}

Rectangle& Rectangle::operator=(const Figure &other) {
        if (this != &other) {
            const Rectangle& otherRect = dynamic_cast<const Rectangle&>(other);
            width = otherRect.width;
            height = otherRect.height;
        }
        return *this;
}