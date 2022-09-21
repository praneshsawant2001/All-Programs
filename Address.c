#include<stdio.h>

 int main()
 {
   int no = 11;
   char ch = 'S';
   printf("%d\n",no);
   printf("value of ch %c\n",ch);
   printf("Address of no %u\n",&no);
   printf("Address of ch %u\n",&ch);
   printf("Size of no is %d\n",sizeof(no));
   printf("Size of ch is %d\n",sizeof(ch));
  return 0;
 }