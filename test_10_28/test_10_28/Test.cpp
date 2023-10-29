#include <iostream>
using namespace std;

//
//class ListNode
//{
////private:
//public:
//
//	int _val;
//	ListNode* _next;
//
//	ListNode(int val = 0)
//	{
//		_val = val;
//		_next = nullptr;
//	}
//
//
//	~ListNode()
//	{
//		ListNode* cur = this;
//		while (cur != nullptr)
//		{
//			ListNode* next = cur->_next;
//			cur->_next = nullptr;
//			free(cur);
//			cur = next;
//		}
//	}
//
//
//	/*void Init(int val)
//	{
//		_val = val;
//		_next = nullptr;
//	}*/
//
//
//	ListNode* BuyNode(int val)
//	{
//		ListNode* tmp = (ListNode*)malloc(sizeof(ListNode));
//		if (nullptr == tmp)
//		{
//			perror("malloc");
//			exit(-1);
//		}
//		tmp->_val = val;
//		tmp->_next = nullptr;
//
//		return tmp;
//	}
//
//
//	void Push(int val)
//	{
//		ListNode* ret = BuyNode(val);
//		this->_next = ret;
//	}
//
//
//	void Print()
//	{
//		ListNode* cur = this;
//		while (cur != nullptr)
//		{
//			ListNode* next = cur->_next;
//			cout << cur->_val << " -> ";
//			cur = next;
//		}
//		cout << endl;
//	}
//};


//int main()
//{
//	//ListNode n1(10);
//	//ListNode n2(20);
//	//ListNode n3(30);
//	//ListNode n4(40);
//	//ListNode n5(50);
//	//n1._next = n2;
//	//n2._next = n3;
//	//n3._next = n4;
//	//n4._next = n5;
//
//
//	//n1.Print();
//
//	ListNode n1(10);
//	n1.Push(20);
//	n1.Print();
//	
//	n1.~ListNode();
//	return 0;
//}


//class Stack
//{
//private:
//	int* _a = nullptr;
//	int _top = 0;
//	int _capacity = 0;
//
//public:
//	Stack(int capacity = 3)
//	{
//		int* tmp = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == tmp)
//		{
//			perror("malloc");
//			exit(-1);
//		}
//		_a = tmp;
//		_capacity = capacity;
//	}
//
//
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//		//free(this);
//	}
//};
//
//
//int main()
//{
//	Stack s1;
//
//	return 0;
//}



//class ListNode
//{
//private:
//
//	int _val;
//	ListNode* _next;
//
//public:
//
//	ListNode(int val = 0)
//	{
//		_val = val;
//		_next = nullptr;
//	}
//
//
//	~ListNode()
//	{
//		ListNode* cur = this;
//		while (cur != nullptr)
//		{
//			ListNode* next = cur->_next;
//			cur->_next = nullptr;
//			//free(cur);
//			cur = next;
//		}
//	}
//};

//
//int main()
//{
//	ListNode n1(10);
//	
//	return 0;
//}