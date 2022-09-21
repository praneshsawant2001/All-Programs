#include<stdio.h>

 int main()
 {
	double d = 3.14;
	float f = 6.10;
	int Arr[3] = {21,43,54};
	int x = 0;

	float Brr[4] ={98.3,4.3};
	int i = 0;

	printf("%d\n",Brr[i]);
	i++;
	printf("%d\n",Brr[i]);

	x = Arr[2] + 21 + Arr[0];
	x++;

	printf("%d\n",x);

	printf("%d\n",sizeof(d));
	printf("%d\n",sizeof(f));

	printf("%d\n",sizeof(21));
	printf("%d\n",sizeof(6.10));
	printf("%d\n",sizeof(6.10f));

	printf("%d\n",sizeof(d));

	return 0;
 }