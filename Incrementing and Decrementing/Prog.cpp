// Preincrement & Postincrement operators. (++Var & Var++)
// Preincrement ++Var : First adds 1 to Var then works with the new value.
// Postincrement Var++ : First finishes working with Var and then adds 1 to it.(For further usage.)
// Predecrement & Postdecrement operators (--Var & Var--) are used similarly.
   
#include <iostream>
using namespace std;

main()
{
	int c = 5;

	cout << c << endl;
	cout << c++ << endl;
	cout << c << endl << endl;

	c = 5;
	cout << c << endl;
	cout << ++c << endl;
	cout << c << endl;
	
	return 0;
}
