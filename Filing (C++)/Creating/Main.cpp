#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

const char strOutputFile[] = "Output1.txt";

int main( void )
{
	ofstream outFile(strOutputFile, ios::out);
	if(!outFile)
	{
		cerr << "Cannot create file!" << endl;
		exit(1);
	}
	char strName[100];
	int num;

	cout << "Enter Name and Number (EOF to exit): " << endl;

	while(cin >> strName >> num)
	{
		outFile << strName << ' ' << num << endl;
		cout << "Enter Name and Number (EOF to exit): " << endl;
	}

	return 0;
}
