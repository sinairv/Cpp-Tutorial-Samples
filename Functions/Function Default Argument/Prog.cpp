// Function Default Argument
// When a default argument is omitted in a function call, the default value defined in the 
///		prototype is automatically inserted by the compiler and passed to the function.
// Default arguments must be the rightmost (trailing) arguments in the function parameter list.
///		Otherwise it would be a syntax error.
// When calling a function with two or more default arguments, if an omitted argument is not 
///		the rightmost argument in the argument list, all arguments to the right of that
///		argument must be omitted.
// Default arguments should ONLY be specified with the first occurance of the function name
///		typically prototype (Otherwise it would be a syntax error).
// Default values can be constants, global variables, or FUNCTION CALLS.

#include <iostream>
using namespace std;

int boxVolume( int = 1, int = 1, int height = 1 );
// As you see the name of variables even here is not needed in funcion prototypes.

int main()
{
	cout << "The default box volume is: " << boxVolume() 
         << "\n\nThe volume of a box with length 10,\n"
         << "width 1 and height 1 is: " << boxVolume( 10 ) 
         << "\n\nThe volume of a box with length 10,\n" 
         << "width 5 and height 1 is: " << boxVolume( 10, 5 )
         << "\n\nThe volume of a box with length 10,\n"
         << "width 5 and height 2 is: " << boxVolume( 10, 5, 2 )
         << endl;

    return 0;
}

// Calculate the volume of a box 
int boxVolume( int length, int width, int height)
{ 
	return length * width * height;
}
