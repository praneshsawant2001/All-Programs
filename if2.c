#include<stdio.h>

 int main()
 {
	auto int iage = 0;

	printf("Enter your age\n");
	scanf("%d",&iage);

	if((iage>=0) && (iage<=10))
	{
	   printf("Your ticket amount is 100\n");
	}
	else if((iage>10) && (iage<=40))
	{
	   printf("Your ticket amount is 500\n");
	}
	else if(iage>40)
	{
	   printf("Your ticket amount is 300\n");
	}

	return 0;
 }