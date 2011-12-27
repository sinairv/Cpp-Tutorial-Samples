// The do/while repetition structure.
// The loop continuation condition is tested after the loop body is performed.
// The loop body will be executed at least once. (as opposed to while repetition structure)

#include <iostream>
using namespace std;

int main()
{
	int num1 = 1;
	do
		cout << num1 << endl;
	while ( ++num1 <= 10 ); // it ends with semicolon.

	return 0;
}
