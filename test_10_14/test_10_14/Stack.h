#pragma once


#include <stdio.h>
#include <stdlib.h>


namespace st
{
	typedef struct Stack
	{
		int* a;
		int top;
		int capacity;
	}ST;

	// ȱʡ����
	void StackInit(ST* ps, int n = 4);
	void StackPush(ST* ps, int x);
}