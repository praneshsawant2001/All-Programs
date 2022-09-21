#include<stdio.h>
 
 int main()
 {
	auto int marks = 0;

	printf("enter your marks\n");
	scanf("%d",&marks);

	printf("your entered marks: %d\n",marks);

	if(marks >= 60)
	{
	    printf("first class\n");
	}
	else
	{
	    printf("not a first class\n");
	}

	return 0;
 }