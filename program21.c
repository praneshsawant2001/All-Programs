#include<stdio.h>
#include<stdbool.h> 

 bool check(int iNo)
 {
  if(
     ((iNo%3)==0) && 
     ((iNo%5)==0)
    )
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

  bret=check(ivalue);
  if(bret==true)
  {
   printf("%d number is divisiable 3 and 5\n",ivalue);
  }
  else
  {
   printf("%d number is not divisiable 3 and 5\n",ivalue);
  }
  return 0;
 }