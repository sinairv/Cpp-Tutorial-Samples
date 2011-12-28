// Function Pointers
// As an array name is a pointer to its first element, a function name is the address of the
//	of the starting point of the function in memory.
// Pointers to functions can be passed to functions, returned from functions, stored in arrays
//	and assigned to other function pointers.
// Just as a pointer to a variable is dereferenced to access the value of the variable, a
//	pointer to a function is dereferenced to execute the function.

#include <iostream>
#include <iomanip>
using namespace std;

void BubbleSort(int ArrayName[] , const int ArraySize , bool (*Compare)(int Var1 ,int Var2));
bool Ascending (int Var1 , int Var2);
bool Descending(int Var1 , int Var2);
void PrintArray (const int ArrayName[], const int ArraySize);

int main()
{
	const int ArraySize = 10;
	int Array1[ArraySize] = {12,13,14,2,5,8,39,9,10,7};

	cout << "Array1 in its original state : \n";
	PrintArray(Array1,ArraySize);

	BubbleSort(Array1,ArraySize,Ascending);
	cout << "\nArray1 sorted Ascendingly : \n";
	PrintArray(Array1,ArraySize);
	
	BubbleSort(Array1,ArraySize,Descending);
	cout << "\nArray1 sorted Descendingly : \n";
	PrintArray(Array1,ArraySize);

	return 0;
}

void BubbleSort(int ArrayName[] , const int ArraySize , bool (*Compare)(int Var1 ,int Var2))
{
	for (int pass = 0 ; pass < ArraySize - 1 ; pass++)
	{
		for (int i = 0 ; i < ArraySize -1 ; i++)
		{
			if((*Compare)(ArrayName[i],ArrayName[i+1]))
			{
				int hold = ArrayName[i];
				ArrayName[i] = ArrayName[i+1];
				ArrayName[i+1] = hold;
			}
		}
	}
}
bool Ascending (int Var1 , int Var2)
{
	return Var1>Var2;
}
bool Descending(int Var1 , int Var2)
{
	return Var2>Var1;
}
void PrintArray (const int ArrayName[], const int ArraySize)
{
	cout << setiosflags(ios::left);
	for (int i = 0 ; i < ArraySize ; i++)
		cout << setw(4) << ArrayName[i] << "  ";
	cout << endl;
}
