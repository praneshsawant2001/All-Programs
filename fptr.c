#include<stdio.h>
 int addition(int no1, int no2)
 {
   int ans = 0;
   ans = no1+no2;
   return ans;
 }

 int main()
 {
   int a = 10,b = 20;
   int ret = 0;

   int (*fptr)(int,int);
   fptr = addition;
   printf("address of addition function is %d\n",addition);
   ret = fptr(a,b);
   printf("addition is%d\n",ret);
 
   return 0;
 }