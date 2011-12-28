// strcpy and strncpy
// Syntax : char * strcpy(char * Str1 , const char * Str2);
// Copies the string Str2 into the character array Str1 and the value of Str1 is returned.
///	(whether used or not used).
// Syntax : char * strncpy(char * Str1 , const char * Str2 , size_t n);
// Copies at most n characters of Str2 (whether containing NULL character or not) into the
///	character array Str1. The value of Str1 is returned.
// The strncpy function copies the initial n characters of Str2 to Str1 and returns Str1.
///	If n is less than or equal to the length of Str2, a null character is not appended 
///	automatically to the copied string. If n is greater than the length of Str2, the 
///	destination string is padded with null characters up to length n. The behavior of strncpy 
///	is undefined if the source and destination strings overlap.

#include <string.h>
#include <stdio.h>

int main ( void )
{
	char X[] = "Hello World!";
	char Y[15],Z[15];

	printf("%s\n",strcpy(Y,X));
	printf("X : %s\n",X);
	printf("Y : %s\n\n",Y);

	strncpy(Z,X,5);
	Z[5] = '\0';
	printf("Z : %s\n\n",Z);

	// Out of MSDN Library.
	char string[100] = "Cats are nice usually";
	printf ( "Before: %s\n", string );
	strncpy( string, "Dogs", 4 );
	strncpy( string + 9, "mean", 4 );
	printf ( "After:  %s\n", string );

	return 0;
}
