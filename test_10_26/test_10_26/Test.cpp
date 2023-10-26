#include <iostream>
using namespace std;

//
//class Stack
//{
//public:
//	Stack(int capacity = 3)
//	{
//		int* tmp = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == tmp)
//		{
//			perror("malloc");
//		}
//		_a = tmp;
//		_capacity = capacity;
//		_top = 0;
//	}
//
//	~Stack()
//	{
//		free(_a);
//		_capacity = _top = 0;
//		_a = nullptr;
//	}
//
//private:
//	int* _a;
//	int _capacity;
//	int _top;
//};

//
//class Date
//{
//public:
//	
//
//	/*Date(int year = 20, int month = 20, int day = 20)
//	{
//		int _year = year;
//		int _month = month;
//		int _day = day;
//	}*/
//
//
//	Date()
//	{
//		int _year = 10;
//		int _month = 10;
//		int _day = 10;
//	}
//
//
//	~Date()
//	{
//		cout << "~Date" << endl;
//	}
//
//	void Print()
//	{
//		cout << _year << " " << _month << " " << _day << endl;
//	}
//
//
//private:
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//	/*int _year;
//	int _month;
//	int _day;*/
//};
//
//
//int main()
//{
//	// Stack s1;
//
//	Date d1;
//	d1.Print();
//
//	return 0;
//}



//class Date
//{
//public:
//	Date(int year = 10, int month = 10, int day = 10)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	~Date()
//	{
//		cout << "~Date" << endl;
//	}
//
//	void Print()
//	{
//		cout << _year << " " << _month << " " << _day << endl;
//	}
//
//
//private:
//	/*int _year;
//	int _month;
//	int _day;*/
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//};
//
//
//int main()
//{
//	Date d1;
//	d1.Print();
//
//	return 0;
//}


//class A
//{
//public:
//	//void Print()
//	//{
//	//	cout << "Print()" << endl;
//	// 	//	cin >> *_a;
//	//}
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//
//
//private:
//	int* _a;
//};
//
//
//int main()
//{
//	A* p = nullptr;
//	//p->Print();
//	p->PrintA();
//
//	return 0;
//}


//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//
//
//private:
//	int _a;
//};
//
//
//int main()
//{
//	A* p = nullptr;
//	p->PrintA();
//	return 0;
//}


//struct ListNode
//{
//	ListNode* next;
//	int val;
//};
//
//
//int main()
//{
//	ListNode n1;
//
//	return 0;
//}


struct Stack
{
	int* _a;
	int _top;
	int _capacity;

	void Init()
	{
		_a = nullptr;
		_top = _capacity = 0;
	}
};


//int main()
//{
//	/*Stack s1;
//	s1.Init();*/
//
//	return 0;
//}


//int main()
//{
//	Stack._a = nullptr;
//	return 0;
//}


//int main()
//{
//	Stack s1;
//	cout << sizeof(s1) << endl;
//	return 0;
//}


//
//class A1 // 空类
//{};
//
//class A2 // 只有成员函数
//{
//public:
//	void f();
//};
//
//class A3 // 既有成员变量又有成员函数
//{
//private:
//	int* _a;
//public:
//	void Init();
//};
//
//int main()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//	return 0;
//}


class Date
{
private:
    int _year;
    int _month;
    int _day;

public:
    void Init(int year = 10, int month = 10, int day = 10)
    {
        _year = year;
        _month = month;
        _day = day;
    }

    void Print()
    {
        cout << _year << " " << _month << " " << _day << endl;
    }
};

int main()
{
    Date d1;
    Date d2;

    d1.Init();
    d2.Init(2023, 10, 26);

    d1.Print();
    d2.Print();

    return 0;
}