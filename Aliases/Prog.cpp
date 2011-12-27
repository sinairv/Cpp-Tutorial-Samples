// References must be initialized.
// The alias is simply another name for the original variable.
// When an alias is defined for another variable it means that 2 variables use identical memory addresses. Compare pointers.
// A reference argument must be an lvalue not a constant or expression that returns an rvalue.
// The return value of functions can be a reference.
// For other usages see: call-by-reference.

#include <iostream>
using namespace std;

int &Func( void )
{
	static int a = 0;
	cout << "a == " << a << endl;
	return a;
}

int main()
{
	int x = 3, &y = x , z;  // y is now an alias for x

    cout << "x = " << x << endl << "y = " << y << endl;
    y = 7;
    cout << "x = " << x << endl << "y = " << y << endl;
	// All operations supposedly performed on the alias (i.e. the reference) are actually performed on the original variable itself.
	z = y;
	cout << "z = "<< z ;

	cout << "\nA function returning a reference: \n\n";

	Func();
	Func() = 5;
	Func() += 5;
	Func();

	cout << "\n\nPress ENTER to exit.\n";
	cin.get();


    return 0;
}
