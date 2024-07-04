#include<iostream>
using namespace std;
class Time
{
   public :
	int day;
	int month;
	int year;
	int hour;
	int min;
	friend ostream& operator << (ostream ,const Time&);         //Exertion through operator overloading

		
};
