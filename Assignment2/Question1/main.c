

#include<stdio.h>
#include "factorial.h"
#include "fibonacci.h"
void  main()
{
    int n;
    printf("Enter the num");
    scanf("%d",&n);
    int result2 = fibonacci(n);
    int result = factorial(n);
    printf("The factorial of the num %d \n",result);
    printf("The fibonacci of the num %d \n",result2); 

}
