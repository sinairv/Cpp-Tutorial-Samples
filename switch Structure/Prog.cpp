// The switch Multiple-Selection Structure
// The switch structure can only be used with integer constants and character constants (which are evaluated to integer constants).
// The switch structure consists of a series of case labels, and an optional default case.
// The Variable grade which is used by switch structure is called controlling expression.
// The break statement causes program control to proceed with the first statement after the switch structure.
// If break is not used anywhere in a switch structure, then each time a match occurs in the structure, the statements for all the remaining cases will be executed.
// If no match occurs the default case is executed.
// It is not necessary to place the default case last.
// The last case (here the default case) does not need break. (But many programmers prefer to use it.)
// Pressing the Enter key after inputing a data places a newline character (shown by '\n') after the character we want to process.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int Grade,
		ACounter = 0,
		BCounter = 0,
		CCounter = 0,
		DCounter = 0,
		FCounter = 0;
	cout << "Enter Letter Grades (A, B, C, D, or F) and Press EOF (Ctrl+Z) or (Ctrl+D) to finish. " << endl;

	while ((Grade = cin.get()) != EOF)
	{
		switch (Grade)
		{
			case 'a' :
			case 'A' :
				ACounter++;
				break;
			case 'b' :
			case 'B' :
				BCounter++;
				break;
			case 'c' :
			case 'C' :
				CCounter++;
				break;
			case 'd' :
			case 'D' :
				DCounter++;
				break;
			case 'f' :
			case 'F' :
				FCounter++;
				break;
			case '\n':  // newlines (i.e. pressing Enter),
			case '\t':  // tabs, and
			case ' ' :  // spaces are
				break;  // ignored.
			default :
				cout << "Wrong Entry." << endl;
				break;   // Since default is the last case, this break statement is optional.
		}
	}

	cout << endl << endl;
	cout << setw(7) << setiosflags(ios::left) << "Total" << setw(7) << "A" << setw(7) << "B" << setw(7) << "C" << setw(7) << "D" << setw(7) << "F" << endl;
	cout << setw(7) << (ACounter + BCounter + CCounter + DCounter + FCounter) << setw(7) << ACounter << setw(7) << BCounter << setw(7) << CCounter << setw(7) << DCounter << setw(7) << FCounter << endl;
	
	return 0;
}
