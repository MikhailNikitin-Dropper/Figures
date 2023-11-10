#ifndef FIGURES_ELLIPSE_H
#define FIGURES_ELLIPSE_H
#include "Figure.h"

class Ellipse : public Figure {
private:
    double a;
    double b;

public:
    Ellipse(double major=0, double minor=0) : a(major), b(minor) {}

    double area() const override;

    double perimeter() const override;

    void print(std::ostream& os) const override;

    Ellipse& operator=(const Figure& other) override;
};



#endif //FIGURES_ELLIPSE_H
