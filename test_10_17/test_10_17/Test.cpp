#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;



void func(int a, int b = 10, int c = 20)
{
	cout << a << endl << b << endl << c << endl << endl;
}


int main()
{
	func(1);
	func(1, 2);
	func(1, 2, 3);

	return 0;
}