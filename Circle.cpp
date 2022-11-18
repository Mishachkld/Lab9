#include "Circle.h"
#include <cmath>

namespace ms {


    Circle::Circle(double radius) {
        baseRadius = radius;
    }

    Circle::~Circle() {}


    void Circle::countLength() {
        length = 2 * PI * baseRadius;
    }


    double Circle::getLength() {
        return length;
    }
}