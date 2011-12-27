#include <iostream>
#include <iomanip>
using namespace std;

void PrintArray (int ArrayName[] , const int ArraySize);
void BubbleSort(int ArrayName[] , const int ArraySize);

int main()
{
	const int ArraySize = 10;
	int Array1[ArraySize] = {10,9,8,7,6,5,4,3,2,1};

	cout << "Before Sorting:\n\n";
	PrintArray(Array1,ArraySize);
	BubbleSort (Array1,ArraySize);
	cout << "\nAfterSorting:\n\n";
	PrintArray(Array1,ArraySize);
	
	return 0;
}

// LIMITATION: none
// It performs bubble-sort in an efficient way.
//		In a normal way (as seen in "\..\simple\prog.cpp") when the first counting of i occurs
// it is guaranteed that the last item is the smallest item. When the second counting of i 
// occurs it is guaranteed that the two smallest items are stored in two last elements; and so
// forth. So why examine them every time hence stating ArraySize-i in the j's continuation
// condition. The other thing is that if during an i's counting no swapping occurs, it won't 
// occur any more which means that the array is already sorted, hence the definition and using
// the bool variable IsFound.
void BubbleSort(int ArrayName[] , const int ArraySize)
{
	int Temp; 
	bool IsFound = false;

	for (int i = 1 ; i < ArraySize ; i++)
	{
		for (int j = 0; j < ArraySize - i ; j++)
		{
			if (ArrayName[j] > ArrayName[j+1])
			//It does the swapping.
			{
				Temp = ArrayName[j];
				ArrayName[j] = ArrayName[j+1];
				ArrayName[j+1] = Temp;

				IsFound = true;
			}
		}
		if (!IsFound)
			break; // -or- return;
	}
}

// LIMITATION: iostream , iomanip
// It prints the array's contents in rows of 20.
void PrintArray (int ArrayName[] , const int ArraySize)
{
	cout << setiosflags(ios::left);
	for (int i = 0 ; i < ArraySize ; i++)
	{
		cout << setw(3) << ArrayName[i];
		if (i+1 % 20 == 0)
			cout << endl;
	}
	cout << endl;
}
