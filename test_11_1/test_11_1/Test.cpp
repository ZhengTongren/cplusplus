#include <iostream>
using namespace std;



class Stack
{
//private:
public:

	int* _a;
	int _top;
	int _capacity;

//public:

	Stack(int capacity = 3)
	{
		_a = (int*)malloc(sizeof(int) * capacity);
		if (nullptr == _a)
		{
			perror("malloc");
			exit(-1);
		}
		_top = 0;
		_capacity = capacity;
	}

	~Stack()
	{
		free(_a);
		_top = _capacity = 0;
		_a = nullptr;
	}


	Stack(const Stack& st)
	{
		_capacity = st._capacity;
		_top = st._top;
		_a = (int*)malloc(sizeof(int) * _capacity);

		memcpy(_a, st._a, sizeof(int) * _top);
	}


	void Print()
	{
		for (int i = 0; i < _top; i++)
		{
			cout << _a[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
	Stack s1(3);
	s1._a[0] = 10;
	s1._a[1] = 20;
	s1._a[2] = 30;

	Stack s2(s1);
	Stack s3(3);
	return 0;
}