// complex.cpp

// Multiplying complex numbers

#include <iostream>
#include <complex> // required for the complex class

using namespace std;

typedef complex<float> complx;//3.2- defnining complex<float> as complx (naming it 'complex' causes errors)

int main()
{
    complx num1{ 2.0, 2.0 };  // using C++11 uniform initialisation syntax
    complx num2{ 4.0, -2.0 }; // old syntax: complex<float> num2(4.0,-2.0);

    auto answer = num1 * num2; // using C++11 auto keyword,
                               // answer is of type: complex<float>

    cout << "The answer is: " << answer << endl;
    cout << "Or in a more familiar form: " << answer.real() << " + " << answer.imag() << "j" << endl;

    // answer++ This will not work, as complex is not of type int, and likely has no operator defined for incrementation. For this to work, we would have to define this operator to increment the value of the complex type

    return 0;
}
