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


void DateTest2()
{
	Date d1(2023, 11, 6);

	cout << d1 + 500 << endl;
	cout << d1 - 500 << endl;

	cout << d1 + 2000 << endl;
	cout << d1 - 3200 << endl;
	/*cout << d1 << endl;

	cout << d1 + 5000 << endl;

	d1 += 5000;
	cout << d1 << endl;*/
	/*cout << d1 - 5000 << endl;

	d1 -= 5000;
	cout << d1 << endl;*/
}


void DateTest3()
{
	Date d1(2023, 11, 6);
	/*cout << d1++ << endl;
	cout << d1 << endl;
	cout << ++d1 << endl;
	cout << d1 << endl;*/

	cout << d1-- << endl;
	cout << d1 << endl;
	cout << --d1 << endl;
	cout << d1 << endl;
}


void DateTest4()
{
	Date d1;
	Date d2(2023, 11, 6);
	const Date d3(d1);

	cout << (d1 < d2) << endl;
	cout << (d3 <= d2) << endl;
	cout << (d2 >= d1) << endl;
	cout << (d2 >= d3) << endl;

	/*cout << (d1 != d2) << endl;
	cout << (d2 >= d1) << endl;*/

	/*cout << (d1 > d2) << endl;
	cout << (d2 > d1) << endl;
	cout << (d1 == d2) << endl;*/
}


int main()
{
	DateTest4();
	return 0;
}