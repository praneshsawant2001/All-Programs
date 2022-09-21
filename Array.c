#include<stdio.h>

 int main()

{
 int no1 = 10;
 int no2 = 20;
 int no3 = 30;
 int no4 = 40;

 int Data[4] = {10,20,30,40};
 
 printf("Value of no1 %d\n",no1);
 printf("Address of no1 %d\n",&no1);
 printf("first element of array %d\n",Data[0]);
 printf("Base address of array %d\n",Data);
 printf("Base address of first element of array %d\n",Data[1]);
 printf("Base address of second element of array %d\n",Data[2]);
 printf("Base address of third element of array %d\n",Data[3]);
 printf("Size of no1 %d\n",sizeof(no1));
 printf("Size of array %d\n",sizeof(Data));
 printf("Size of first element in array %d\n",(Data[0]));

 return 0;
}