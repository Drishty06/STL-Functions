// double sin(double) : This function takes angle (in degree) as an argument and return its sine value that could be verified using sine curve.
//  double cos(double) : This function takes angle (in degree) as an argument and return its cosine value that could be verified using cosine curve.
// double tan(double) : This function takes angle (in degree) as an argument and return its tangent value. This could also be verified using Trigonometry as Tan(x) = Sin(x)/Cos(x).
//    double sqrt(double) : This function takes number as an argument and return its square root value. Number can not be negative value.
//  int abs(int) : This function takes integer number as an argument and return its absolute value. It means, the output will always be positive regardless of sign of input.
//  double pow(double, double) : This function takes one argument as base and other as exponent.
//   double hypot(double, double) : This function requires two sides of the right angled triangle to give output as its hypotenuse.
//    double floor(double) : This functions returns the integer value lesser or equal to argument passed in the function.
//    double fabs(double) : This function returns the absolute value of any number.
//    double acos(double) : This function returns the arc cosine of argument. The argument to acos() must be in the range -1 to 1 ; otherwise, a domain error occurs.
//    double asin(double) : This function returns the arc sine of argument. The argument to asin() must be in the range -1 to 1 ; otherwise, a domain error occurs.
//    double atan(double) : This function returns the arc tangent of arg.
//    double atan2(double, double) : This function returns the arc tangent of (double a)/(double b).
//    double ceil(double) : This function returns the smallest integer as double not less than the argument provided.
//    double cosh(double) : This function returns the hyperbolic cosine of argument provided. The value of argument provided must be in radians.
//    double tanh(double) : This function returns the hyperbolic tangent of argument provided. The value of argument provided must be in radians.
//    double log(double) : This function takes a number and returns the natural log of that number.

#include <iostream>
#include <math.h>
using namespace std;
  
int main()
{
    double x = 2.3;
    cout << "Sine value of x=2.3 : " << sin(x) << endl;
    cout << "Cosine value of x=2.3 : " << cos(x) << endl;
    cout << "Tangent value of x=2.3 : " << tan(x) << endl;
  
    double y = 0.25;
    cout << "Square root value of y=0.25 : " << sqrt(y) << endl;
  
    int z = -10;
    cout << "Absolute value of z=-10 : " << abs(z) << endl;
    cout << "Power value: x^y = (2.3^0.25) : " << pow(x, y) << endl;
  
    x = 3.0;
    y = 4.0;
    cout << "Hypotenuse having other two sides as x=3.0 and"
         << " y=4.0 : " << hypot(x, y) << endl;
  
    x = 4.56;
    cout << "Floor value of x=4.56 is : " << floor(x) << endl;
  
    x = -4.57;
    cout << "Absolute value of x=-4.57 is : " << fabs(x) << endl;
  
    x = 1.0;
    cout << "Arc Cosine value of x=1.0 : " << acos(x) << endl;
    cout << "Arc Sine value of x=1.0 : " << asin(x) << endl;
    cout << "Arc Tangent value of x=1.0 : " << atan(x) << endl;
  
    y = 12.3;
    cout << "Ceiling value of y=12.3 : " << ceil(y) << endl;
  
    x = 57.3; // in degrees
    cout << "Hyperbolic Cosine of x=57.3 : " << cosh(x) << endl;
    cout << "Hyperbolic tangent of x=57.3 : " << tanh(x) << endl;
  
    y = 100.0;
    // Natural base with 'e'
    cout << "Log value of y=100.0 is : " << log(y) << endl;
  
    return 0;
}

//output
//Sine value of x=2.3 : 0.745705
//Cosine value of x=2.3 : -0.666276
//Tangent value of x=2.3 : -1.11921
//Square root value of y=0.25 : 0.5
//Absolute value of z=-10 : 10
//Power value: x^y = (2.3^0.25) : 1.23149
//Hypotenuse having other two sides as x=3.0 and y=4.0 : 5
//Floor value of x=4.56 is : 4
//Absolute value of x=-4.57 is : 4.57
//Arc Cosine value of x=1.0 : 0
//Arc Sine value of x=1.0 : 1.5708
//Arc Tangent value of x=1.0 : 0.785398
//Ceiling value of y=12.3 : 13
//Hyperbolic Cosine of x=57.3 : 3.83746e+24
//Hyperbolic tangent of x=57.3 : 1

//link : https://www.geeksforgeeks.org/c-mathematical-functions/
//Log value of y=100.0 is : 4.60517
