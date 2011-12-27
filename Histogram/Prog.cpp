#include <iostream>
#include <iomanip>
using namespace std;

void DrawAsterisk (int);

int main()
{
	unsigned int Figures[10] = {18,20,32,29,4,0,29,12,9,10} ;
	
	cout << "Index" << setw(8) << "Value" << setw(14) << "Histogram" << endl << endl;

	for (int i=0 ; i < 10 ; i++)
	{
		cout << setw(5) << i+1 << setw(8) << Figures[i] << setw(6);
		DrawAsterisk(Figures[i]);
		cout << endl;
	}

	return 0;
}

void DrawAsterisk ( int x )
{
	for (int j = 1 ; j <= x ; j++)
		cout << "*";
}
