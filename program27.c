#include<stdio.h>

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

int main()
{
 int iValue=0;
 int iRet=0;

 printf("Enter number\n");
 scanf("%d",&iValue);

 iRet=AdditionOfFactors(iValue);
 printf("Addition of factors is : %d\n",iRet);
 
 return 0;
}
