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

int main()
{
	DateTest2();

	return 0;
}