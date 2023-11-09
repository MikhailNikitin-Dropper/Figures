#ifndef FIGURES_ELLIPSE_H
#define FIGURES_ELLIPSE_H
#include "Figure.h"

class Ellipse : public Figure {
private:
    double a; // semi-major axis
    double b; // semi-minor axis

public:
    Ellipse(double major, double minor) : a(major), b(minor) {}

    double area() const override;

    double perimeter() const override;

    void print(std::ostream& os) const override;

    Ellipse& operator=(const Figure& other) override;
};



#endif //FIGURES_ELLIPSE_H
