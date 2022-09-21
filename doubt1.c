#include<stdio.h>
#include<stdlib.h>

 struct outer
 {
	float f;
	int i;
	struct inner
	{
	   int x;
	   int y;
	};
 };
  union demo
   {
	int no;
	char * ch;
	double d;
   };

 int main()
  {
	int no = 3;
	int *p = &no;


	printf("%d\n",sizeof(no));
	printf("%d\n",sizeof(p));

	return 0;
 }
	