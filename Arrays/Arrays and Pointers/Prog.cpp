// Different ways of accessing an array's elements.
#include <iostream>
using namespace std;

int main ( void )
{
	const int ArraySize = 4;
	int Array[ArraySize] = {10,11,12,13};
	int *Ptr;
	
	cout << "Array Subscript Notation : " << endl;
	for (int i = 0 ; i < ArraySize ; i++)
		cout << "Array[" << i << "] = " << Array[i] << endl;

	cout << "\nPointer / Offset Notation (where the pointer is the array name) :\n";
	for (int Offset = 0 ; Offset < ArraySize ; Offset++)
		cout << "*(Array + "<< Offset << ") = " << *(Array+Offset) << endl;

	Ptr = Array;
	cout << "\nPointer Subscript Notation : \n";
	for (int i = 0 ; i < ArraySize ; i++)
		cout << "Ptr[" << i << "] = " << Ptr[i] << endl;

	cout << "\nPointer / Offset Notation : \n";
	for (int Offset = 0 ; Offset < ArraySize ; Offset++)
		cout << "*(Ptr + " << Offset << ") = " << *(Ptr + Offset) << endl;
	
	cout << endl;

	return 0;
}
