// Arrays and Pointers.
// An array name is a pointer to its first element by default.
// So  ++ArrayName  switches to the next element.
// An array name is a CONSTANT pointer to the beginning of the array.

#include <iostream>
using namespace std;

template <class TypeName>
void Proceed(TypeName *ArrayName); 
// When using Template, even in prototype you must mention the name of variables.

int main()
{
	char String1[] = "STRING";
	int NumArray1[] = {1,2,3,4,5,6};
	Proceed (String1);
	Proceed (NumArray1);

	Proceed ("Test");  

	return 0;
}

template <class TypeName>
void Proceed(TypeName *ArrayName)
{
	for (int i = 0 ; i < 6 ; i++)
	{
		cout << *ArrayName << endl;
		++ArrayName;  // Switches to the next element of the array.
	}
	cout << endl;
	// Of course if TypeName is char then we can check if  *ArrayName == "\0".
}
