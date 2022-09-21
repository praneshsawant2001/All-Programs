#include<stdio.h>

 int addition(int , int);

 int main()
 {
	int a = 10;
	int b = 11;
	int ret = 0;

	ret = addition(a,b);

	printf("%d",ret);
	return 0;
 }

 int addition(int no1,int no2)
 {
	int ans = 0;
	ans = no1 + no2;

	return ans;
 } 