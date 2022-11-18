#include <iostream>
#include "Circle.h"
#include "Func.h"



int main() {
    double R;
    fs::inputData(R);
    ms::Circle circle = ms::Circle(R);
    circle.countLength();
    fs::outputData(circle.getLength());

    return 0;
}
