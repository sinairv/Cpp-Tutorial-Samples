// The position number contained within square brackets is called a subscript.
// In an array declaration the number within square brackets defines the number of elements.
///		1st element has a subscript of 0.
// So the nth element of an array has a subscript of n-1.
// Arrays can be initialized in their declarations. To do so place an equal sign after the 
///		declaration and comma separated list of initializers enclosed in braces ({}).
// If there are fewer initializers than elements in the array the remaining elements are 
///		automatically initialized to zero.
// If the array size is omitted in a declaration with initializer list the number of elements 
///		in the array would be the number of initializers. e.g. The number of elements of the 
///		array woulb be 5 in the following declaration: int c[] = {1,2,3,4,5};
// Referring to an element out of the bounds of array definition is a logic error, but not a 
///		syntax error.

#include <iostream>
using namespace std;

int main()
{
	int MyArray[5] = {1};  // Only initializes MyArray[0] to 1 and others to 0.

	cout << MyArray[4] << endl;

	cout << "&MyArray[0] = " << &MyArray[0] << endl; // Address of MyArray[0] in memory.
	cout << "MyArray = " << MyArray << endl;  // MyArray itself. (without subscript)
	// You see that  MyArray  is equivalent to address of its 1st element (element number 0).

	return 0;
}
