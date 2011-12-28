#include <iostream>
using namespace std;

int maxim (int x , int y , int z)   // both function prototype and definition.(with no ;).
{
	int greatest;
	x > y ? greatest = x : greatest = y;
	greatest < z ? greatest = z : greatest ;

	return greatest;
}

int main()
{
	int num1,num2,num3;
	cout << "Enter 3 numbers : ";
	cin >> num1 >> num2 >> num3;
	cout << "Max is " << maxim (num1 , num2 , num3) << endl;

	return 0;
}
