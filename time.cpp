#include"time.h"
using namespace std;
ostream& operator<<(ostream& o,Time& obj)          //Exertion through operatorer overloading
{
	obj.day=28;
	obj.month=07;
	obj.year=2022;
	obj.hour=10;
	obj.min=00;
	o<<obj.day<<"/"<<obj.month<<"/"<<obj.year;
	o<<"\n"<<obj.hour<<":"<<obj.min;
	return o;
}
