// "new" and "delete" operators for performing
//	Dynamic Memory Allocation
// Syntax:
/*	TypeName *ptrToTypeName;
	ptrToTypeName = new TypeName;
	if(ptrToTypeName == 0)
		cout << "Not Enough Memory!" << endl;
	delete ptrToTypeName;
*/
// Syntax for arrays:
/*	TypeName *ptrToTypeName;
	ptrToTypeName = new TypeName[nCount]; //size_t nCount
	ptrToTypeName[i] = SomeValue; //How to assign some value.
	delete [] ptrToTypeName; //How to deallocate.
*/
#include <iostream>
using namespace std;

int main( void )
{
	float *ptr;
	ptr = new float(3.14);
	cout << *ptr << endl;

	int Size = 10; // using a variable to show it is dynamic.
	int *pArray = new int[Size];
	pArray[0] = 5;
	pArray[8] = 6;
	cout << pArray[0] << endl;
	cout << pArray[8] << endl;
	delete [] pArray;
	
	return 0;
}
