// This program describes using the const qualifier with pointers.

#include <iostream>
using namespace std;

int main ()
{
	int x = 1;
	int y = 2;
	int z = 3;
	// Read from right to left : 
	int *const Ptr1 = &y;  // Ptr1 is a constant pointer to an integer.
	const int *Ptr2 = &x;  // Ptr2 is a pointer to an integer constant.
 	const int *const Ptr3 = &z;  // Ptr3 is a constant pointer to an integer constant.

	// Because a pointer holds an address so Ptr1 cannot hold any other ADDRESS.
	// Ptr1 = &x;  is an error.
	// *Ptr1 = 7;   completely acceptable.
	cout << "x = " << x << endl;
	*Ptr1 = 7;
	cout << "New value of x is : " << x << endl;
	// Ptr2 is not a constant pointer, so it can point to another address.
	// But it points to an integer constant, so it cannot modify the value of the address it holds.
	// *Ptr2 = 8;  is an error.
	// Ptr2 = &z;  completely acceptable.
	Ptr2 = &z;
	cout << "The value of *Ptr2 is " << *Ptr2 << " and the value of z = " << z << endl;
	// Ptr3 is a constant pointer to an integer constant, so it cannot change the address it
	//    holds nor the value of the address it holds. So it's Read-Only.
	// *Ptr3 = 10;  is an error.
	// Ptr3 = &x;   is an error too.
	cout << "The value of *Ptr3 is " << *Ptr3 << endl; // Read-Only
	
	return 0;
}
