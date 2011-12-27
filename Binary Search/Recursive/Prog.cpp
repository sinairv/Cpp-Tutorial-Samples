#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void BubbleSort(int [] , const int);
int BinarySearch (const int ArrayName[], const int ArraySize, const int SearchKey , const int FromIndex, const int ToIndex);
void ShowArray (const int [] , const int , const int);

int main()
{
	const int ArraySize = 90;
	int Array1[ArraySize];
	int SearchFor , Result;

	cout << "Enter an integer between 10 and 99 to search for: ";
	cin >> SearchFor;
	cout << "\n";

	srand (time(NULL));
	for (int i = 0; i < ArraySize ; i++)
		Array1[i] = 10 + rand() % 90;

	BubbleSort (Array1 , ArraySize);
	Result = BinarySearch(Array1,ArraySize,SearchFor,0,ArraySize-1);
	ShowArray(Array1,ArraySize,Result);
	
	return 0;
}

void BubbleSort(int Array1[] , const int ArraySize)
{
	for(int i = 0 ; i < ArraySize-1 ; i++)
		for (int j = 0; j < ArraySize-1 ; j++)
			if (Array1[j] < Array1[j+1])
			{
				int hold = Array1[j];
				Array1[j] = Array1[j+1];
				Array1[j+1] = hold;
			}
}

// It performs a binary search on a bubble-sorted (descendingly ordered) array. RECURSIVE VERSION
// And returns the subscript of the found item or -1 if it is not found.
// FromIndex and ToIndex makes a sub-array out of the original array.
int BinarySearch (const int ArrayName[], const int ArraySize, const int SearchKey , const int FromIndex, const int ToIndex)
{
	int SearchResult , MidIndex;
	if (ToIndex - FromIndex == 1)
	{
		if (SearchKey == ArrayName[FromIndex])
			SearchResult = FromIndex;
		else if (SearchKey == ArrayName[ToIndex])
			SearchResult = ToIndex;
		else 
			SearchResult = -1;
	}
	else
	{
		MidIndex = (ToIndex + FromIndex) / 2;
		if (SearchKey == ArrayName[MidIndex])
			SearchResult = MidIndex;
		else if (SearchKey > ArrayName[MidIndex])
			SearchResult = BinarySearch (ArrayName,ArraySize,SearchKey,FromIndex,MidIndex);
		else if (SearchKey < ArrayName[MidIndex])
			SearchResult = BinarySearch (ArrayName,ArraySize,SearchKey,MidIndex,ToIndex);
	}

	return SearchResult;
}

void ShowArray (const int ArrayName[] , const int ArraySize , const int Index)
{
	for (int i = 0 ; i < ArraySize ; i++)
	{
		cout << ArrayName[i];
		if (i == Index)
			cout << "* ";
		else 
			cout << "  ";
		if ((i+1 % 10) == 0)
			cout << endl;
	}

	cout << "\n\n";
	if (Index < 0)
		cout << "Not Found!";
	else
		cout << "Your number has the subscript of: " << Index;
	cout << "\n";
}
