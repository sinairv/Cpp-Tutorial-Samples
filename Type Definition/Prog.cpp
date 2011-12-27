#include <iostream>
using namespace std;

int main()
{
	// tyepdef does NOT create a new type.
	// It creates a new name for an existing type name.
	typedef unsigned long ULONG;
	ULONG Var1 = 7;
	cout << Var1 << endl;

	return 0;
}
