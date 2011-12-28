// Comparing call-by-value and call-by-refernce.
// See also: aliases.

#include <iostream>
using namespace std;

int squareByValue( int );
void squareByReference( int & );
                                                     
int main()
{
	int x = 2, z = 4;

	cout << "x = " << x << " before squareByValue\n"
         << "Value returned by squareByValue: "
         << squareByValue( x ) << endl
         << "x = " << x << " after squareByValue\n" << endl;

    cout << "z = " << z << " before squareByReference" << endl;
    squareByReference( z );
    cout << "z = " << z << " after squareByReference" << endl;

    return 0;
}
 
int squareByValue( int a )
{
	return a *= a;   // caller's argument not modified
}
 
void squareByReference( int &cRef )
{
    cRef *= cRef;    // caller's argument modified
}
