#define _CRT_SECURE_NO_WARNINGS 1


#include "Stack.h"


namespace st
{
	void StackInit(ST* ps, int n)
	{
		ps->a = (int*)malloc(sizeof(int) * n);
		ps->top = ps->capacity = 0;
	}


	void StackPush(ST* ps, int x)
	{
		;
	}
}