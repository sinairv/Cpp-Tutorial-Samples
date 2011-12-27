// The incrementing part of the for loop is executed after the body is executed.
// so in this case ++num1 and num1++ operate quite similarly.
// Note that between 'for' header statements we use semicolon (;) NOT a comma (,). 
// The best 2 ways of assigning the initial and final values of a loop are :
//	1. Use <= operator to show correctly the final value. (In this case the initial value is normally set to 1).
//	2. Set the initial value to 0 and use < operator to set the final value. (called 0-based continuing.)
// Each expression in the for structure is optional. But the two semicolons are needed.
// for example: for(; *ptrString != '/0' ; ++ptrString) // no initialization

#include <iostream>
using namespace std;

int main()
{
	// Since ++num1 (i.e. expression 3) is executed after the body of for, ++num1 operates similarly as num1++.
	for (int num1 = 1; num1 <= 10; ++num1)    // It is not necessary to initiate num1 in the header.
		cout << num1 << endl;                 // It can be initiated before and used in the header.

	return 0;
}
