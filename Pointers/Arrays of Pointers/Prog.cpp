// Arrays of Pointers and passing them to functions.
#include <stdio.h>

void PrintOutOf(char **StrSet,int Index);
void PrintOutOf2(char *StrSet[] , int Index);

int main()
{
	char * StringSet[4] = {"Hello","World","Hi","Universe"};
	for (int i = 0 ; i < 4 ; i++)
	{
		printf("%s\n",StringSet[i]);
	}

	PrintOutOf(StringSet,1);
	PrintOutOf2(StringSet,2);

	return 0;
}

void PrintOutOf(char **StrSet,int Index)
{
	printf("\n%s\n",*(StrSet+Index));
	printf("%s\n",StrSet[Index]);

}

void PrintOutOf2(char *StrSet[] , int Index)
{
	printf("\n%s\n",*(StrSet+Index));
	printf("%s\n",StrSet[Index]);

}
