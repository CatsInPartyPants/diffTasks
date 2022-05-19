// delME.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double min(double x, double y);

int main()
{
    double x=55, y=43, z;
    z = min((3 * x), (2 * y)) + min((x - y), (x + y));
    std::cout << "z is equal " << z;
}

double min(double x, double y) {
    double result;
    (x > y) ? result = y : result = x;
    std::cout << "min is " << result << std::endl;
    return result;
}
