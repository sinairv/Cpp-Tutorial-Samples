#include <iostream>
using namespace std;

void Function0 (int Num);
void Function1 (int Num);
void Function2 (int Num);
void Function3 (int Num);

int main( void )
{
	const int ArraySize = 4;
	void (*F[ArraySize])(int) = {Function0,Function1,Function2,Function3};
	// F is an array of 4 pointers to functions that each take an int as an argument and 
	//		return void.
	int Choice;
	cout << "Enter your choice from 0 to 3 : ";
	cin >> Choice;

	if (Choice >=0 && Choice < ArraySize)
		(*F[Choice])(Choice);
	else
		cout << "Out of Range!\n";

	return 0;
}

void Function0 (int Num)
{
	cout << "You entered " << Num << ", so Function0 was called.\n";
}
void Function1 (int Num)
{
	cout << "You entered " << Num << ", so Function1 was called.\n";
}
void Function2 (int Num)
{
	cout << "You entered " << Num << ", so Function2 was called.\n";
}
void Function3 (int Num)
{
	cout << "You entered " << Num << ", so Function3 was called.\n";
}
