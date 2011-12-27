#include <iostream.h>
#include <math.h>
#include <iomanip.h>

main()
{
	int BaseNo , ExpoNo;
	cin >> BaseNo >> ExpoNo;
	cout << setw(16) << setiosflags(ios::fixed) << pow(BaseNo,ExpoNo) << endl;

	return 0;
}