#include<stdio.h>
#include<stdbool.h>

bool ChkPrime(int iNo)
{
 int iCnt=0;

 for(iCnt=2;iCnt<=(iNo/2);iCnt++)
 {
  if(iNo%iCnt==0)
  {
   break;
  }
 }

  if(iCnt==(iNo/2)+1)
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

 bRet=ChkPrime(iValue);
 if(bRet==true)
 {
  printf("%d is a prime number",iValue);
 }
 else
 {
  printf("%d is not a prime number",iValue);
 }
 return 0;
}