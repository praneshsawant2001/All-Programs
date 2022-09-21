#include<stdio.h>
#include<stdbool.h>

int AdditionOfFactors(int iNo)
{
 int iCnt=0;
 int isum=0;

 if(iNo<0)
 {
  iNo= -iNo;
 }

 for(iCnt=1;iCnt<=(iNo/2);iCnt++)
 {
  if((iNo%iCnt)==0)
  {
   isum=isum+iCnt;
  }
 } 
 return isum;
}

bool ChkPerfect(int iNo)
{
 int iAns=0;
 iAns=AdditionOfFactors(iNo);
 if(iAns==iNo)
 {
  return true;
 }
 else
 {
  return false;
 }
}

int main()
{
 int iValue=0;
 bool bRet;

 printf("Enter number\n");
 scanf("%d",&iValue);

 bRet=ChkPerfect(iValue);
 if(bRet==true)
 {
  printf("%d is a perfect number\n",iValue);
 }
 else 
 {
  printf("%d is not perfect number\n",iValue);
 }
 return 0;
}
