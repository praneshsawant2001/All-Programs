#include<stdio.h>

 int addition(int no1, int no2)
 {
	int ans = 0;
	ans = no1+no2;
	return ans;
 }
 int main()
 {
	int a=10,b=11,c=0;
	c = addition(a,b);
	printf("%d",c);
	return 0;
 }