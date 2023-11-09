//
// Created by mike0 on 10.11.2023.
//

#ifndef FIGURES_SQUARE_H
#define FIGURES_SQUARE_H
#include "Figure.h"

class Square: public Figure{
private:
    double a;
public:
    Square(double s): a(s) {};
    double area() const override;

    double perimeter() const override;

    void print(std::ostream& os) const override;

    Square& operator=(const Figure& other) override;
};


#endif //FIGURES_SQUARE_H
