// Here a 2_dimentional array is passed to a function which uses only a row of it.
// Refer to line 32.

#include <iostream>
#include <iomanip>
using namespace std;

void PrintRow (int [] , int);

int main()
{
	const int Rows = 3 , Columns = 4;
	int RowNo;
	int Array1[Rows][Columns] ={{90,91,92,93},{80,81,82,83},{85,86,87,88}};

	cout << "Here is the array : \n" << endl;
	for(int i = 0 ; i < Rows ; i++)
	{
		cout << "[" << i << "]";
		for(int j = 0 ; j < Columns ; j++)
			cout << setw(5) << Array1[i][j];
		cout << endl;
	}

	cout << endl << "Now enter the number of the row you want to be printed : ";
	cin >> RowNo;

	if ((RowNo < 0) || (RowNo > (Rows - 1)))
		RowNo = 0;
	
	cout << endl;
	PrintRow(Array1[RowNo] , Columns);
	cout << endl;
	return 0;
}

void PrintRow (int ArrayName[] , int Size)
{
	for(int i = 0 ; i < Size ; i++)
		cout << setw(5) << setiosflags(ios::left) << ArrayName[i];
	cout << endl;
}
