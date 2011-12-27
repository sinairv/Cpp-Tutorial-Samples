#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void BubbleSort(int [], const int);

int main()
{
	const int ArraySize = 10;
	int Array1[ArraySize];

	srand(time(NULL));
	for (int i = 0; i < ArraySize ; i++)
		Array1[i] = 1 + rand() % 100;
	cout << "Before sorting:\n";
	for (int j = 0 ; j < ArraySize ; j++)
		cout << Array1[j] << "  ";
	cout << "\n";

	BubbleSort (Array1,ArraySize);
	
	return 0;
}

void BubbleSort(int Array1[], const int ArraySize)
// For a good portable version refer to "\..\Advanced\Prog.cpp"
{
	void SWAP (int & , int &);
	for (int i = 0 ; i < ArraySize - 1 ; i++)
	{
		for (int j = 0 ; j < ArraySize - 1 ; j++)
		{
			if (Array1[j] < Array1[j+1])
			{
				SWAP (Array1[j] , Array1[j+1]);
			}
		}
		cout << "Stage " << i+1 << ":\n";
		for (int j = 0 ; j < ArraySize ; j++)
			cout << Array1[j] << "  ";
		cout << "\n";
	}
}

void SWAP (int &Var1 , int &Var2)
{
	int Hold = Var1;
	Var1 = Var2;
	Var2 = Hold;
}
