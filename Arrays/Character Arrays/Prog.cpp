// Character arrays can be declared and initialized as: char String1[] = "LITERAL";
// The string declared in the preceeding line has actually 8 elements. 7 literals and 1 string
///		termination character called the null character shown by '\0'. So another way of
///		declaring String1 is: char String1[] = {'L','I','T','E','R','A','L','\0'};
// Space is also considered as a null char.
// Strings can be output as: cout << String1;

#include <iostream>
using namespace std;

int main()
{
	char String1[20];   // A string of 19 chars + a null char.

	cout << "Enter a string of maximum 19 chars : ";
	cin >> String1; // Reads characters from the keyboard until the first whitespace character is encountered.
	cout << endl;

	for( int i = 0 ; String1[i] != '\0' ; i++ )  // null char is determined by '\0'
	{
		cout << String1[i] << endl;
	}

	cout << endl;
	return 0;
}
