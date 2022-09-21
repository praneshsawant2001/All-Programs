#include<stdio.h>

void Displayclass(float fmarks)
 {
  if((fmarks>0) && (fmarks<35.0))  
  {
   printf("You are fail\n");
  }
  else if((fmarks>=35.0) && (fmarks<50.0))
  {
   printf("Pass class\n");
  }
  else if((fmarks>=50.0) && (fmarks<60.0))
  { 
   printf("Second class\n");
  }
  else if((fmarks>=60.0) && (fmarks<70.0))
  {
   printf("First class\n");
  }
  else if((fmarks>=70.0) && (fmarks<=100.0))
  {
   printf("First class with distinction\n");
  }
  else
  {
   printf("invalid marks\n");
  }

 }

int main()
 {
  float fvalue=0.0;

  printf("Enter the percentage\n");
  scanf("%f",&fvalue);

  Displayclass(fvalue);

  return 0;
 }