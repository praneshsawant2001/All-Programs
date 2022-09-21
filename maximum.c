#include<stdio.h>

 int main()
 {
	int a , b;
	
	printf("Enter any two numbers\n");
	scanf("%d%d", &a, &b);

	if(a>b)
	{
	    printf("first number is maximum:%d\n",a);
	}
	else
	{
	    printf("Second number is maximum:%d\n",b);
	}
	
	return 0;
 }