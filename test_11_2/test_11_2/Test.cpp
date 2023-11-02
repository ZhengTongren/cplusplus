#include "Date.h"


//int main()
//{
//	int ret = Add(1, 2);
//	cout << ret << endl;
//
//
//	return 0;
//}


void DateTest1()
{
	Date d1(2023, 11, 2);
	// d1 += 50;
	//cout << (d1 + 500) << endl;
	Date d2 = d1 + 50;
	d1 += 500;
	d1.Print();
	d2.Print();
}


void DateTest2()
{
	Date d1(2023, 11, 2);
	Date d2 = d1 - 500;

	cout << (d1 == d2) << endl;
	cout << (d1 != d2) << endl;
	/*d1 -= 50;

	d1.Print();
	d2.Print();*/
}


void DateTest3()
{
	Date d1(2023, 11, 2);
	Date d2(2022, 11, 2);
	Date d3(d1);

	cout << (d1 > d2) << endl;
	cout << (d1 >= d3) << endl;

	cout << (d2 < d1) << endl;
	cout << (d3 <= d1) << endl;
}


void DateTest4()
{
	Date d1(2023, 11, 2);
	Date d2 = d1 - 1990;

	cout << (d1 - d2) << endl;
	cout << (d2 - d1) << endl;
}


void DateTest5()
{
	Date d1(2023, 11, 2);
	Date d4(d1);
	/*++d1;
	d1++.Print();
	d1.Print();*/

	//Date d2(d1);

	Date d2 = d1--;
	Date d3 = --d4;

	d2.Print();
	d3.Print();
	
	/*d1.Print();
	d2.Print();
	--d1;
	d1.Print();*/
}


int main()
{
	DateTest5();

	return 0;
};
