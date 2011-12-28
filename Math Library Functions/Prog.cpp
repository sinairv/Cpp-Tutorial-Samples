// All functions in math.h library get and return values of type double.
// Note that function  abs()  returns an integer. In order to return a float use fabs() instead.

#include <iostream>
#include <iomanip>
#include <cmath>  //also <math.h>
using namespace std;

int main()
{
	int Col1 = 13 , Col2 = 15 , Col3 = 12;
	
	cout << setw(Col1) << "Function Name" << setw(Col2) << "Usage Example" << setw(Col3) <<"Result" << "  " << "Discription\n\n";
	cout << setw(Col1) << "ceil()" << setw(Col2) << "ceil(-8.5)" << setw(Col3) << ceil(-8.5) << "  " << "Ceiling.Integer more or equal to x." << endl;
	cout << setw(Col1) << "floor()" << setw(Col2) << "floor(-8.5)" << setw(Col3) << floor(-8.5) << "  " << "Integer less or equal to x.\n";
	cout << setw(Col1) << "abs()" << setw(Col2) << "abs(-10)" << setw(Col3) << abs(-10) << "  " << "Absolute value of x.\n";
	cout << setw(Col1) << "exp()" << setw(Col2) << "exp(1)" << setw(Col3) << exp(1) << "  " << "Takes e to the power of x.\n";
	cout << setw(Col1) << "log()" << setw(Col2) << "log(2.718282)" << setw(Col3) << log(2.718282) << "  " << "Natural logarithm base e.\n";
	cout << setw(Col1) << "log10()" << setw(Col2) << "log10(100)" << setw(Col3) << log10(100) << "  " << "logarithm base 10.\n";
	cout << setw(Col1) << "pow(x,y)" << setw(Col2) << "pow(2.0,10)" << setw(Col3) << pow(2.0,10) << "  " << "Raises x to the power of y.\n";
	cout << setw(Col1) << "sqrt()" << setw(Col2) << "sqrt(25)" << setw(Col3) << sqrt(25) << "  " << "Square root of x.\n";
	cout << setw(Col1) << "fmod(x,y)" << setw(Col2) << "fmod(2.7,1.3)" << setw(Col3) << fmod(2.7,1.3) << "  " << "Remainder as a floating point number.\n";
	cout << setw(Col1) << "cos()" << setw(Col2) << "cos(0)" << setw(Col3) << cos(0) << "  " << "Cosine. (x in radians)\n";
	cout << setw(Col1) << "sin()" << setw(Col2) << "sin(0)" << setw(Col3) << sin(0) << "  " << "Sine. (x in radians)\n";
	cout << setw(Col1) << "tan()" << setw(Col2) << "tan(0)" << setw(Col3) << tan(0) << "  " << "Tangent. (x in radians)\n\n";

	return 0;
}
