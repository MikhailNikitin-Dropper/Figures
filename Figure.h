//
// Created by mike0 on 10.11.2023.
//

#ifndef FIGURES_FIGURE_H
#define FIGURES_FIGURE_H
#include <iostream>

class Figure {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void print(std::ostream& os) const = 0;
    virtual Figure& operator=(const Figure& other) = 0;

    friend std::ostream& operator<<(std::ostream& os, const Figure& figure) {
        figure.print(os);
        return os;
    }
};


#endif //FIGURES_FIGURE_H
