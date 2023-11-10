#ifndef FIGURES_RECTANGLE_H
#define FIGURES_RECTANGLE_H
#include "Figure.h"

class Rectangle : public Figure{
private:
    double width;
    double height;
public:
    Rectangle(double w=0, double h=0) : width(w), height(h) {}
    double area() const override;

    double perimeter() const override;

    void print(std::ostream& os) const override;

    Rectangle& operator=(const Figure& other) override;
};

#endif //FIGURES_RECTANGLE_H
