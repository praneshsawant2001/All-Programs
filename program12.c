#include<stdio.h>

 void Display(int ino)
 {
  int icnt=0;
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