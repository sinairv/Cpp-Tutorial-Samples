//	strcat and strncat

//	Syntax : char *strcat( char *strDestination, const char *strSource );
///	 strDestination : Null-terminated destination string
///	 strSource : Null-terminated source string
//	The strcat function appends strSource to strDestination and terminates the resulting 
///	 string with a null character. The initial character of strSource overwrites the 
///	 terminating null character of strDestination. No overflow checking is performed when 
///	 strings are copied or appended. The behavior of strcat is undefined if the source and 
///	 destination strings overlap.
//	The programmer must ensure that strDestination is large enough to hold both strDestination
///	 and strSource and the terminating null character (copied from strSouce).

//	Syntax : char *strncat( char *strDest, const char *strSource, size_t count );
///	 strDest : Null-terminated destination string
///	 strSource : Null-terminated source string
///	 count : Number of characters to append
//	The strncat function appends, at most, the first count characters of strSource to strDest.
///	 The initial character of strSource overwrites the terminating null character of strDest. 
///	 If a null character appears in strSource before count characters are appended, strncat 
///	 appends all characters from strSource, up to the null character. If count is greater than 
///	 the length of strSource, the length of strSource is used in place of count. The resulting 
///	 string is terminated with a null character. If copying takes place between strings that 
///	 overlap, the behavior is undefined.

#include <string.h>
#include <stdio.h>

int main ( void )
{
	char Str1[15] = "Hello ";
	char Str2[15] = "World!";
	strcat(Str1,Str2);
	printf("%s\n\n",Str1);

	char string[80] = "This is the initial string!";
	char suffix[] = " extra text to add to the string...";
	/* Combine strings with no more than 19 characters of suffix: */
	printf( "Before: %s\n", string );
	strncat( string, suffix, 19 );
	printf( "After:  %s\n", string );

	return 0;
}
