// In an if statement it is not necessary for the expression to be a boolean one.
// If a value such as an integer is given to it, it checks if the value is zero or not.
// If it is zero it plays the roll FALSE.
// If it is not zero (even if it is negative) it plays the roll of TRUE.
// As an example refer to line : 27.
#include <iostream>
using namespace std;

int main ()
{
	int grade;
	
	cout << "Enter your grade : ";
	cin >> grade;
	if (grade >= 90)
		cout << "A\n";
	else if (grade >= 80)
		cout << "B\n";
	else if (grade >= 70)
		cout << "C\n";
	else if (grade >= 60)
		cout << "D\n";
	else
	{
		cout << "F : Fail.\n";
		cout << "You must take this course again.\n";
	}
	if(grade)
		cout << "Your grade wasn't zero." << endl;
	else
		cout << "Your grade was zero." << endl;

	return 0;
}
