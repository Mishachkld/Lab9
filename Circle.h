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


    private:
        double baseRadius;
        double PI = M_PI;
        double length;


    };
}

