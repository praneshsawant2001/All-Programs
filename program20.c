#include<stdio.h>
#include<stdbool.h> 

 bool Checkeven(int iNo)
 {
  if((iNo%2)==0)
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
  int ivalue=0;
  bool bret=false;
  
  printf("Enter number\n");
  scanf("%d",&ivalue);

  bret=Checkeven(ivalue);
  if(bret==true)
  {
   printf("%d is even number\n",ivalue);
  }
  else
  {
   printf("%d is odd number\n",ivalue);
  }
  return 0;
 }