#include <iostream>
using namespace std;

//int main()
//{
//	int* p1 = new int;
//	// ע������p2��p3
//	int* p2 = new int(10);// ��*p2���г�ʼ�� 10
//	int* p3 = new int[10];// p3 ָ��һ��40���ֽڵ�int���Ϳռ�
//
//	int* p4 = new int[10]{ 1, 2, 3 };// ��p4��ָ�ռ���г�ʼ��
//
//	delete p1, p2;// �ͷſռ�
//	delete[] p3, p4;
//
//	return 0;
//}

//
//class Stack
//{
//public:
//	Stack(int capacity = 3)
//		:_top(0)
//		, _capacity(capacity)
//	{
//		cout << "Stack(int capacity = 3)" << endl;
//		_a = new int[capacity];
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		delete _a;
//		_top = _capacity = 0;
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//
//int main()
//{
//	Stack* s1 = (Stack*)operator new(sizeof(Stack));
//	new(s1)Stack(2);
//
//	delete s1;
//	return 0;
//}


//int main()
//{
//	Stack* s1 = new Stack;
//	// new(s1)Stack(2);
//
//	delete s1;
//	return 0;
//}



//int main()
//{
//	Stack* s1 = new Stack[10];
//
//	delete[] s1;
//
//	return 0;
//}
//


