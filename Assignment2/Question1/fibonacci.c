

#include<stdio.h>
#include "factorial.h"

int fibonacci(int n)
{

	if(n==1||n==0)
	{
	     	return n;
	}
	else
	{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}
