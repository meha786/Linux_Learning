

#include<stdio.h>
#include "factorial.h"

void  main()
{
    int n;
    printf("Enter the num");
    scanf("%d",&n);
    int result = factorial(n);
    printf("The factorial of the num %d \n",result);
     

}
