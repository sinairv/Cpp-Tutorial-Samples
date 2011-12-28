//	strtok() Function.

//	Syntax : char *strtok( char *strToken, const char *strDelimit );
//	On the first call to strtok, the function skips leading delimiters 
///	 and returns a pointer to the first token in strToken, terminating 
///	 the token with a null character. More tokens can be broken out of 
///	 the remainder of strToken by a series of calls to strtok. Each 
///	 call to strtok modifies strToken by inserting a null character 
///	 after the token returned by that call. To read the next token 
///	 from strToken, call strtok with a NULL value for the strToken 
///	 argument. The NULL strToken argument causes strtok to search for 
///	 the next token in the modified strToken. The strDelimit argument 
///	 can take any value from one call to the next so that the set of 
///	 delimiters may vary.

#include <string.h>
#include <stdio.h>

int main( void )
{
	char string[] = "A string\tof ,,tokens\nand some  more tokens";
	char seps[]   = " ,\t\n";
	char *token;

	printf( "%s\n\nTokens:\n", string );
	/* Establish string and get the first token: */
	token = strtok( string, seps );
	while( token != NULL )
	{
		/* While there are tokens in "string" */
		printf( " %s\n", token );
		/* Get next token: */
		token = strtok( NULL, seps );
	}
	
	return 0;
}
