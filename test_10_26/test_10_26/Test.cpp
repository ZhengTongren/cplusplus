#include <iostream>
using namespace std;


class Stack
{
public:
	Stack(int capacity = 3)
	{
		int* tmp = (int*)malloc(sizeof(int) * capacity);
		if (nullptr == tmp)
		{
			perror("malloc");
		}
		_a = tmp;
		_capacity = capacity;
		_top = 0;
	}

	~Stack()
	{
		free(_a);
		_capacity = _top = 0;
		_a = nullptr;
	}

private:
	int* _a;
	int _capacity;
	int _top;
};


class Date
{
public:
	

	/*Date(int year = 20, int month = 20, int day = 20)
	{
		int _year = year;
		int _month = month;
		int _day = day;
	}*/


	Date()
	{
		int _year = 10;
		int _month = 10;
		int _day = 10;
	}


	~Date()
	{
		cout << "~Date" << endl;
	}

	void Print()
	{
		cout << _year << " " << _month << " " << _day << endl;
	}


private:
	int _year = 1;
	int _month = 1;
	int _day = 1;
	/*int _year;
	int _month;
	int _day;*/
};


int main()
{
	// Stack s1;

	Date d1;
	d1.Print();

	return 0;
}