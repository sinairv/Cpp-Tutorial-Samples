// Using overloaded functions
// Using multiple functions with the same name but different parameters is called Function Overloading.
// C++ automatically chooses the most proper one depending to the number, types, and order of arguments in the call.
// They are distinguished by their parameter list (actually signature) NOT their return value,
// Overloaded functions can have different return types, but must have different parameter lists.
// Creating overloaded functions with identical parameter lists and different return types is a syntax error.

#include <iostream>
using namespace std;

int square( int x ) 
{ 
	return x * x; 
}

double square( double y ) 
{
	return y * y; 
}

int main()
{
	cout << "The square of integer 7 is " << square( 7 )
         << "\nThe square of double 7.5 is " << square( 7.5 ) 
         << endl; 
	
	return 0;
}
