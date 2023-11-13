#include "Date.h"


//int main()
//{
//	Date d1(2023, 11, 13);
//
//	
//
//	Date d2 = d1 -= 2000;
//	d2.Print();
//
//	return 0;
//}


void Test1()
{
	Date d1(2023, 11, 13);
	Date d2 = d1 + 50;

	d1.Print();
	d2.Print();
}


int main()
{
	Test1();
	return 0;
}