#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>

using namespace std;


void Func(int a, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl << endl;
}


int main()
{
	Func(1);
	Func(1, 2);
	Func(1, 2, 3);
	return 0;
}