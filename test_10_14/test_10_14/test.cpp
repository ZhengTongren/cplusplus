#include <stdio.h>

namespace test
{
	int a = -1;

	namespace test1
	{
		int rand = 10;
	}

	struct Node
	{
		int val;
		int* next;
	};

	int Add(int x, int y)
	{
		return x + y;
	}
}


int main()
{
	printf("%d\n", test::a);

	struct test::Node node = { 10, NULL };
	int sum = test::Add(10, 20);
	printf("%d\n", sum);

	printf("%p\n", &(test::test1::rand));
	printf("%d\n", test::test1::rand);
	return 0;
}