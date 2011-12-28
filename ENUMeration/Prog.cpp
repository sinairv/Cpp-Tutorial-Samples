// Example using enum.
// It defines a new type with the specified name.
// It also defines the values that a variant of that type can optain by assigning a name to that value.
// syntax :  enum type_name {comma_seperated_valuenames};
// e.g.  enum GameStatus {LOST , WON};
// Here LOST has also the value of 0, and the value of those coming after LOST are incremented by 1.
// Example 2 : enum GameStatus {LOST = 1, WON};
// Here LOST has the value of 1, and others are incremented by 1.

#include <iostream>
using namespace std;

int main()
{
	enum TSeasons {SPRING = 1, SUMMER, AUTUMN, WINTER};
	TSeasons season;
	int num1;

	cout << "Enter a month number : ";
	cin >> num1;

	switch (num1)
	{
		case 1 :
		case 2 :
		case 3 :
			season = SPRING;
			break;

		case 4 :
		case 5 :
		case 6 :
			season = SUMMER;
			break;

		case 7 :
		case 8 :
		case 9 :
			season = AUTUMN;
			break;

		case 10 :
		case 11 :
		case 12 :
			season = WINTER;
			break;

		default :
			cout << "Not a valid month number." << endl;
	}

	switch (season)
	{
		case SPRING : 
			cout << "Nice weather." << endl;
			break;

		case SUMMER :
			cout << "Hot weather." << endl;
			break;

		case AUTUMN :
			cout << "Yellow everywhere." << endl;
			break;

		case WINTER :
			cout << "Cold weather." << endl;
			break;

		default :
			cout << "Unaware of your weather." << endl;
	}

	return 0;
}
