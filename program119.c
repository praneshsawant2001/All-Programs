// Addition (Accept N number)

#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
	int iSum=0,iCnt=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	}
	return iSum;
}

int main()
{
	int iLength = 0, iRet = 0, iCnt = 0;
	int *ptr = NULL;
	
	printf("Enter the number\n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(sizeof(int)*iLength);
	
	printf("Enter the values of Array \n");
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Summation(ptr,iLength);
	
	printf("Addition is : %d\n",iRet);
    
	return 0;
}