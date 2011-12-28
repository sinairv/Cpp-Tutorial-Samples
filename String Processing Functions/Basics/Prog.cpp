// Strings Basics 01
// The declaration for String1 creates an array in the memory with the appropriate size
//	according to the size of the initializer list.
// The declaration for String2 creates a pointer to a string "Hi Universe!" which is stored
//	somewhere in the memory.
// A string in C++ is an array of characters ending in the null character ('\0').
// A string is accessed via a pointer to the first character in the string.
// The value of a string is the (CONSTANT) address of its first character.
// It is appropriate to say that in C++ a string is a constant pointer.
// the setw() stream manipulator in line 24 gets 12 characters and leaves the 13th character
//	for the terminating null character.

#include <iostream>
#include <iomanip>
using namespace std;

int main( void )
{
	char String1[13] = "Hello World!";
	char *String2 = "Hi Universe!";

	cout << String1 << endl;
	cout << String2 << endl;

	cin >> setw(13) >> String1;
	cout << String1 << endl;

	return 0;
}
