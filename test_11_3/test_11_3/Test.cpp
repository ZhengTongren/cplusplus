#include "Date.h"


void DateTest1()
{
	Date d1(2023, 11, 3);
	const Date d2(d1);

	cout << &d1 << endl;
	cout << &d2 << endl;

	/*cout << d1;
	cin >> d1;
	cout << d1;*/

}

int main()
{
	DateTest1();
	return 0;
}