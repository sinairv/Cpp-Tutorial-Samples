// In double-subscripted arrays the first subscript is often called the row subscript, and the
///		second one is called the column subscript.
// If double-subscripted array b is initialized as b[m][n] then it is called an m-by-n array.
// You see that each group of numbers initialize the rows respectively.
// Undefined elements are set to 0.
// When using Multidimentional Arrays in function prototypes the 2nd, 3rd,... subscripts 
//		must be mentioned in the function prototype.

#include <iostream>
#include <iomanip>
using namespace std;

void PrintArray (int [][3]); // The 2nd subscript must be mentioned.

int main()
{
	int Array1[2][3] = { {1 , 2 , 3} , { 4 , 5 , 6 } }; // Each list represents each row.
	int Array2[2][3] = { 1 , 2 , 3 , 4 };
	int Array3[2][3] = { {1} , {2 , 3 } }; // The undefined elements are automatically set to zero.

	PrintArray(Array1);
	PrintArray(Array2);
	PrintArray(Array3);

	return 0;
}

void PrintArray (int ArrayName [][3])
{
	for (int i = 0 ; i < 2 ; i++)
	{
		for (int j = 0 ; j < 3 ; j++)
			cout << setw(4) << setiosflags (ios::left) << ArrayName[i][j];
		cout << endl;
	}
	cout << endl;
}
