#include<stdio.h>

void DisplayF(int iNo)
{
 int iCnt=0;

 for(iCnt=1;iCnt<=iNo;iCnt++)
 {
  printf("%d\n",iCnt);
 }
}

void DisplayB(int iNo)
{
 int iCnt=0;

 for(iCnt=iNo;iCnt>=1;iCnt--)
 {
  printf("%d\n",iCnt);
 }
}
int main()
{
 int ivalue=0;
 
 printf("Enter number\n");
 scanf("%d",&ivalue);

 printf("forward display\n");
 DisplayF(ivalue);

 printf("backword display\n");
 DisplayB(ivalue);

 return 0;
}