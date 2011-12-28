// void Pointers (i.e. void *)

// void pointers can point to any data type.
// void pointers cannot be dereferenced. (i.e. *A_void_Ptr  is a syntax error).
// To dereference a void pointer it must be converted to appropriate pointer type using cast operator.
//   e.g. nNum1 = *(int *)(A_void_Ptr);
// Assigning a pointer one type to a pointer of another type needs type casting. But void pointers
//   are not so, and other pointers can be directly assigned to them.

#include <iostream>
using namespace std;

int main ( void )
{
	int n = 5;
	char c = 'c';
	double d = 54.4;
	void * vPtr;

	vPtr = &n;
	cout << *(int *)vPtr << endl;
	vPtr = &c;
	cout << *(char *)vPtr << endl;  // It could have been *(int*)... it's not a syntax error,
									//  but a logic error. Because char is 1B but int is 
									//  normally 4B. so it will use 3 adjacent extra bytes.
	vPtr = &d;
	cout << *(double *)vPtr << endl;

	return 0;
}
