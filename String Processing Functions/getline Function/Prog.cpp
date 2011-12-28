// The cin.getline() Function
// Syntax : cin.getline(StringName,StringSize,DelimiterChar);
// The DelimiterChar is '\n' by default, so you can use this function by specifying only the
///	first two arguments.
// This function reads characters until (StringSize - 1) characters are input, or the Delimiter
///	char is entered, or the End Of File (EOF) char is entered.
// When the delimiter character is typed, it is read and discarded.

#include <iostream>
#include <iomanip>
using namespace std;

int main( void )
{
	const int ArraySize = 40;
	char Sentence[ArraySize];
	cin.getline(Sentence,ArraySize,'\n');
	cout << endl;
	cout << Sentence << endl;

	return 0;
}
