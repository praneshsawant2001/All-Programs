#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	bool bFlag=false;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iNo==Arr[iCnt])
		{
           bFlag=true;
		   break;
		}
	}
	return bFlag;
}
int main()
{
 int iSize=0,iCnt=0,iValue=0;
 bool bRet;
 int *ptr=NULL;
 
 printf("Enter number of elements\n");
 scanf("%d",&iSize);
 
 ptr=(int *)malloc(iSize*sizeof(int));
 
 printf("Enter thr values\n");
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
  scanf("%d",&ptr[iCnt]);
 }
 
 printf("Enter the elements to Search\n");
 scanf("%d",&iValue);
 
 bRet=Search(ptr,iSize,iValue);
 if(bRet==true)
 {
   printf("Element is present in array\n");
 }
 else
 {
   printf("Element is not present in array\n");
 }
 free(ptr);
 
 return 0;
}