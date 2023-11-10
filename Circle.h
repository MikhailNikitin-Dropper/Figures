#ifndef FIGURES_CIRCLE_H
#define FIGURES_CIRCLE_H
#include "Figure.h"

class Circle : public Figure {
private:
    double radius;

public:
    Circle(double r=0) : radius(r) {}
    double area() const override;
    double perimeter() const override;
    void print(std::ostream& os) const override;
    Circle& operator=(const Figure& other) override;
};


#endif //FIGURES_CIRCLE_H
