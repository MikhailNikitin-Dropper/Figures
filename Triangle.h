#ifndef FIGURES_TRIANGLE_H
#define FIGURES_TRIANGLE_H
#include "Figure.h"

class Triangle: public Figure{
private:
    double a,b,c;
public:
    Triangle(double s1=0, double s2=0, double s3=0) : a(s1), b(s2), c(s3) {}
    double area() const override;
    double perimeter() const override;
    void print(std::ostream& os) const override;
    Triangle& operator=(const Figure& other) override;
};


#endif //FIGURES_TRIANGLE_H
