#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int BaseNo , ExpoNo;
	cin >> BaseNo >> ExpoNo;
	cout << setw(16) << setiosflags(ios::fixed) << pow(BaseNo,ExpoNo) << endl;

	return 0;
}
