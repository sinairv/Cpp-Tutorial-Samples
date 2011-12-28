// INLINE FUNCTIONS
// When a function name is preceeded by the qualifer: inline  it means that in the compiled
///		version of the program replace each function call by the function body itself.
// So it can make the program faster in run time.
// But it makes the program larger if the function is called some times.
// So it is recommanded only for small functions.

#include <iostream>
#include <iomanip>
using namespace std;

inline int Cube (int);

int main()
{
	cout << setw(4) << "SIDE" << setw(6) << "CUBE" << endl;
	for (int i=1 ; i <= 10 ; i++)
		cout << setw(4) << i << setw(6) << Cube(i) << endl;
	cout << endl;
	
	return 0;
}

inline int Cube (int Side)
{
	return Side * Side * Side;
}
