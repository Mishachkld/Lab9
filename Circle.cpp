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
        if (radius < 0)
            std::cout<< "Errorrrrrrrr..." << std::endl;
        else
            baseRadius = radius;
    }

    double Circle::getLength() {
        return length;
    }

    void Circle::outInformation(){

        std::cout << "Radius:" << " " << baseRadius << std::endl;
        if (length != -1)
            std::cout << "Length of circle:" << " " << length<< std::endl;
        else
            std::cout << "Need count length of circle((((";

    }
}