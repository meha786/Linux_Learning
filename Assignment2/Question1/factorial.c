

#include<stdio.h>

#include "factorial.h"

int factorial(int n)
{
	printf("hello %d",n);
	if(n==0||n==1)
	{
		return 1;
	}else
	{
		return n * factorial(n-1);
	}
}
