/* Structures */
// A structure cannot, however, contain an instance of itself.
// A structure containing a member that is a pointer to the same structure type 
///	is reffered to as a self-referential structure.
// Member access operators : . (dot operator), -> (arrow operator).
// The dot operator accesses a structure or class member via the variable name for 
///	the object or via a reference to the object.
// The arrow operator accesses a member of an object to a class or structure via 
///	a pointer to that object.
// The only difference between a structure and a class is that: The default 
///	access level assigned to members of struct is public while the default access 
/// level assigned to a class is private.

#include <stdio.h>

struct Structure_Tag  // Structure-tag is the new data type from now on.
{
	int Num1;
	int Num2;
};

struct UDT
{
	int Num1;
	int Num2;
};

UDT st1;

int main()
{
	st1.Num1 = 10;
	st1.Num2 = 20;
	printf("st1.Num1 == %d.\nst1.Num2 == %d.\n",st1.Num1,st1.Num2);
	UDT *ptr;
	ptr = &st1;
	printf("ptr->Num1 == %d.\n(*ptr).Num2 == %d\n",(*ptr).Num1,ptr->Num2);
	
	return 0;
}
