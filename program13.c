//using filter

#include<stdio.h>

 void Display(int ino)
 {
  int icnt=0;
 
  if(ino < 0)
  {
   printf("please enter positive number\n");
   return;
  }

  for(icnt=1;icnt<=ino;icnt++)
  {
   printf("Hello\n");
  }

 }
 int main()
 {
  int ivalue=0;
  
  printf("Enter any number\n");
  scanf("%d",&ivalue);

  Display(ivalue);

  return 0;
 }