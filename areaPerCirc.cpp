// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Chris Di Bert
// Date: Sep.21, 2022
// This program calculates the area and perimeter of"
// A circle with a radius of 4cm.

#include <math.h>

#include <cmath>
#include <iostream>

int main() {
    std::cout << "The area of the circle is: "
              << (M_PI * pow(4, 2)) << "cm^2" << std::endl;
    std::cout << "The circumference of the circle is "
              << (2 * (M_PI * 4)) << "cm" << std::endl;
}
