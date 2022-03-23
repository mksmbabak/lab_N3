#include <iostream>
#include <stdio>
#include "rational.hpp"


using namespace std;


int main()
{
    Rational quarter(1, 4);
    Rational one_third(1, 3);

    Rational add_result, sub_result, multiply_result;
//    add_result = one_third.add(quarter);
//    sub_result = one_third.subtract(quarter);

    add_result = one_third + quarter;
    sub_result = one_third - quarter;
    multiply_result = one_third * quarter;

    one_third.print(); std::cout << " + "; quarter.print(); std::cout << " = "; add_result.print(); std::cout << std::endl;
    one_third.print(); std::cout << " - "; quarter.print(); std::cout << " = "; sub_result.print(); std::cout << std::endl;

    cout << add_result.num() << " - numerator" << endl;
    cout << add_result.den() << " - denominator" << endl;

    add_result = quarter + one_third;
    sub_result = quarter - one_third;

    cout << quarter << endl;
}
