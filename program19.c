#include<stdio.h>

 int summation(int ino)
 { 
  int isum=0;
  int icnt=0;

    if(ino<0)
    {
      ino=-ino;
    }

  for(icnt=1;icnt<=ino;icnt++)
  {
   isum=isum+icnt;
  }
  return isum;
}

 int main()
 {
  int ivalue=0;
  int iRet=0;

  printf("Enter the number\n");
  scanf("%d",&ivalue);

  iRet = summation(ivalue); 
  printf("summation is : %d\n",iRet);

  return 0;
 }