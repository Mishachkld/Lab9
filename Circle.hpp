#pragma once

#include <iostream>
#include <cmath>
//C = 2πr
namespace ms {
    class Circle {
    public:
        Circle(double radius);
        ~Circle();
        void countLength();
        double getLength();
        void setRadius(double radius);


    private:
        double baseRadius = 0;
        double PI = M_PI;
        double length;


    };
}

