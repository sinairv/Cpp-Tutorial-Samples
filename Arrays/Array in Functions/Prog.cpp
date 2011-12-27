// In this program you see that if you modify an array in a function the array itself will be modified.
// Just like a call-by-reference.
// But the elements of the array are refered to as an Integer Value and the changes would affect only in the body of the function.
// Just like a call-by-value.
// (You'll see later that) It's because the name of an integer array is refered to as a pointer to its 1st element.
// If your function must not modify the passed array you can use the const qualifier before that in the parameter list.

#include <iostream>
using namespace std;

void ModifyArray ( int [] , int ); // Shows how to declare an array in a function prototype.
void ModifyElement ( int );

int main()
{
	const int ArraySize = 5;
	int Array1[ArraySize] = { 0 , 1 , 2 , 3 , 4 };

	cout << "The current value of Array1 is : \n";
	for ( int i = 0 ; i < ArraySize ; i++ )
		cout << "[" << i << "] = " << Array1[i] << "   ";
	cout << endl;

	ModifyArray ( Array1 , ArraySize );
	for ( int i = 0 ; i < ArraySize ; i++ )
		cout << "[" << i << "] = " << Array1[i] << "   ";
	cout << endl;
	ModifyElement ( Array1[3] );
	cout << "Array1[3] = " << Array1 [3] << endl;

	cout <<"\n\nPress ENTER to exit.\n";
	cin.get();

	return 0;
}

void ModifyArray ( int ArrayName[] , int ArraySize )
{
	cout << "Now Modifying the Array : " << endl;
	for ( int i = 0 ; i < ArraySize ; i++ )
		ArrayName [i] *= 2;
}
void ModifyElement ( int Element )
{
	cout << "Modifying element number " << 3 << " inside the body of the function : \n";
	cout << "The modified value is " << (Element *= 2) << endl;
}
