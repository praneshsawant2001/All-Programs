//Accept the number from user to display 1 to 5 on screen

#include<stdio.h>
 
void Display(int ino)
 {
  int icnt=0;
  
  if(ino<0)
  {
   ino=-ino;
  }
  /*
  for(icnt=1;icnt<=ino;icnt++)
   {
    printf("%d\n",icnt);
   }
  */

  icnt=1;
  while(icnt<=ino)
  {
   printf("%d\n",icnt);
   icnt++;
  }

 } 

 int main()
 {
  int ivalue=0;

  printf("Enter the number\n");
  scanf("%d",&ivalue);

  Display(ivalue);  

  return 0;
 }