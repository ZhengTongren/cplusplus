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

	void STInit(ST* ps);
	void STPush(ST* ps, int x);
}