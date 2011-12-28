// Pointers : Introduction and principles.
// & : Address operator.
// * : indirection (or dereferencing) operator.
// Using * and & together only returns the address. &*VarPoint = &Var
//												    *&VarPoint = &Var
#include <iostream>
using namespace std;

int main()
{
	int Var = 5;
	int *VarPoint; // It is said that VarPoint is of type ' int * ' which stores an address.
	
	VarPoint = &Var;  // & unary operator returns the address of the variable.
//  In General the statement :  VarPoint = Var;  is an error.
//  Because VarPoint is of type ' int * ' but Var is of type ' int ' and these are not convertable to each other.
	
	cout << "The VALUE which is pointed by VarPoint is : " << *VarPoint << endl;
//  * unary operator returns the value of an address. See the difference in these 2 statements.
	cout << "The ADDRESS which is pointed by VarPoint is : " << VarPoint << endl;
	cout << "The address of VarPoint itself is : " << &VarPoint << endl << endl;

	cout << "Enter a new value for VarPoint : ";
	cin >> *VarPoint;
	cout << "The value of Val has become : ";
	cout << Var << endl;

	return 0;
}
