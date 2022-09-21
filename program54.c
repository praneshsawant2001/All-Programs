#include<stdio.h>

int main()
{
 auto int Arr[5];
 register int iCnt=0;
 
 printf("Enter elements :\n");
 
 for(iCnt=0;iCnt<5;iCnt++)
 {
  scanf("%d\n",&Arr[iCnt]);
 }
 
 printf("Elements of array are :\n");
 
 for(iCnt=0;iCnt<5;iCnt++)
 {
  printf("%d",Arr[iCnt]);
 }
 
 return 0;
}