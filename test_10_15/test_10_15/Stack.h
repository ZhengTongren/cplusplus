#pragma once


#include <stdio.h>
#include <stdlib.h>
// IO流
#include <iostream>

// 命名空间
namespace st
{
	typedef struct Stack
	{
		int* a;
		int top;
		int capacity;
	}ST;

	// 缺省参数
	void StackInit(ST* ps, int n = 4);
	void StackPush(ST* ps, int x);
}
