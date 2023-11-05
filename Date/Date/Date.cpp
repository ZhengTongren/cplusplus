#include "Date.h"


void Date::Print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}


ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "-" << d._month << "-" << d._day;
	return out;
}


istream& operator>>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
}