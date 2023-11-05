#include "Date.h"


void DateTest1()
{
	Date d1(2023, 11, 5);
	Date d2;

	/*d1.Print();
	d2.Print();*/

	cin >> d1 >> d2;


	cout << d1 << endl << d2 << endl;
}


int main()
{
	DateTest1();
	return 0;
}