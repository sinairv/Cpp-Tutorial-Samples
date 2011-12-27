// Arrays of Pointers and passing them to functions.
#include <iostream>
using namespace std;

void PrintOutOf(char **StrSet,int Index);
void PrintOutOf2(char *StrSet[] , int Index);

int main()
{
	char * StringSet[4] = {"Hello", "World", "Hi", "Universe"};

	for (int i = 0 ; i < 4 ; i++)
		cout << StringSet[i] << endl;

	PrintOutOf(StringSet,1);
	PrintOutOf2(StringSet,2);

	return 0;
}
void PrintOutOf(char **StrSet,int Index)
{
	cout << "\n" << *(StrSet+Index) << endl;
	cout << StrSet[Index] << endl;
}

void PrintOutOf2(char *StrSet[] , int Index)
{
	cout << "\n" << *(StrSet+Index) << endl;
	cout << StrSet[Index] << endl;
}
