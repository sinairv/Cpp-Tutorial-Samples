// Introducing the conditional operator ?: which takes 3 operands.
// Structure:  A ? B : C
// Conditional Operator together with the operands form the conditional expression.
// 'A' represents a condition which is True or False.
// If 'A' is True then 'B' is replaced by the entire conditonal expression.
// If 'A' is False then 'C' is replaced by the entire conditional expression.
// So the conditional operator does not return values, but replaces operands with the whole expression.

#include <iostream>
using namespace std;

int main()
{
	int grade;
	cout << "Enter the grade : ";
	cin >> grade;
	cout << (grade >= 60 ? "Passed\n" : "Failed\n");
	grade >=60 ? cout << "Passed\n" : cout << "Failed\n";

	return 0;
}
