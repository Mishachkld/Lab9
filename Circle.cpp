#include "Circle.hpp"
#include <cmath>

namespace ms {


    Circle::Circle(double radius) {
        if (radius < 0)
            std::cout<< "Errorrrrrrrr..." << std::endl;
        else
            baseRadius = radius;
    }

    Circle::~Circle() {}


    void Circle::countLength() {
        length = 2 * PI * baseRadius;
    }

    void Circle::setRadius(double radius) {
        baseRadius = radius;
    }


    double Circle::getLength() {
        return length;
    }
}