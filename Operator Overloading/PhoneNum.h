#ifndef PHONENUM_H

#define PHONENUM_H
#include <iostream>
// Note that calling a using statement in a .h file 
// is not generally a good practice. However we do it here for the
// sake of simplicity.
using namespace std;

class PhoneNum
{
	friend istream &operator>>(istream &Input, PhoneNum &num);
	friend ostream &operator<<(ostream &OutPut, const PhoneNum &num);
private:
	char AreaCode[4];
	char Exchange[4];
	char Line[5];
};

#endif
