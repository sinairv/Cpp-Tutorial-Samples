//	strcmp and strncmp

//	Syntax : int strcmp(const char * s1 , const char * s2);
//	Compares the string s1 to the string s2. The function returns a value of 0, greater than
///	 0 (NOT necessarily 1), or less than 0 (NOT necessarily -1) if s1 is equal to, greater 
///	 than, or less than s2, respectively.

//	Syntax : int strncmp(const char * s1 , const char * s2 , size_t n);
//	Compares up to n characters of string s1 to the string s2. The function returns a value of 
///	 0, greater than 0 (NOT necessarily 1), or less than 0 (NOT necessarily -1) if s1 is equal 
///	 to, greater than, or less than s2, respectively.

//	So the programmer must COMPARE the return value with 0.

//	Since ASCII codes of lower_case letters are greater than those of upper_case letters, a
///	 string in lower_case is greater than the same string in upper_case.

#include <string.h>
#include <stdio.h>

int main( void )
{
	char *S1 = "Hello World!";
	char *S2 = "Hello World!";
	char *S3 = "Hello Universe!";

	printf("S1 = %s\n",S1);
	printf("S2 = %s\n",S2);
	printf("S3 = %s\n\n",S3);

	printf("strcmp( S1 , S2 ) = %d\n",strcmp(S1,S2));
	printf("strcmp( S1 , S3 ) = %d\n",strcmp(S1,S3));
	printf("strcmp( S3 , S1 ) = %d\n\n",strcmp(S3,S1));

	printf("strncmp( S1 , S3 , 6 ) = %d\n",strncmp( S1 , S3 , 6 ));
	printf("strncmp( S1 , S3 , 7 ) = %d\n",strncmp( S1 , S3 , 7 ));
	printf("strncmp( S3 , S1 , 7 ) = %d\n\n",strncmp( S3 , S1 , 7 ));

	
	char string1[] = "The quick brown dog jumps over the lazy fox";
	char string2[] = "The QUICK brown dog jumps over the lazy fox";

	printf("string1 = %s\n",string1);
	printf("string2 = %s\n\n",string2);

	printf("string1 is ");
	if (strcmp(string1,string2) == 0)
		printf("equal to");
	else if (strcmp(string1,string2) > 0)
		printf("greater than");
	else if (strcmp(string1,string2) < 0)
		printf("lower than");
	printf(" string2.\n");

	return 0;
}
