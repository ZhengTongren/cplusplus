#include "Date.h"


int main()
{
	Date d1(2023, 11, 13);

	/*d1 + d2;
	d1 - d2;*/
	/*d1 += 2000;
	d1.Print();*/

	Date d2 = d1 -= 2000;
	d2.Print();

	return 0;
}