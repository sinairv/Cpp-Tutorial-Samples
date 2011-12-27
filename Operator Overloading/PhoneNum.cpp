#include "PhoneNum.h"
#include <iostream>
#include <iomanip>
using namespace std;

istream &operator>>(istream &Input, PhoneNum &num)
{
	Input.ignore();
	Input >> setw(4) >> num.AreaCode;
	Input.ignore(2);
	Input >> setw(4) >> num.Exchange;
	Input.ignore();
	Input >> setw(5) >> num.Line;
	return Input;
}
ostream &operator<<(ostream &Output, const PhoneNum &num)
{
	Output << "(" << num.AreaCode << ") " 
		<< num.Exchange << "-" << num.Line;
	return Output;
}
