#include<stdio.h>
 int main()
 {
	auto int istd = 0;
	printf("Enter your standard\n");
	scanf("%d",&istd);

	switch(istd)
	{
		case 1:
		 printf("your exam is at 8\n");
		 break;

		case 2:
		 printf("your exam is at 9\n");
		 break;

		case 3:
 		 printf("your exam is at 10\n");
		 break;
	
		case 4:
		 printf("your exam is at 11\n");
		 break;

		case 5:
		 printf("your exam is at 12\n");
		 break;

		default:
		 printf("invalid standard\n");
	}

	return 0;
 }