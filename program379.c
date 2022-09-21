#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	
	if(*Head != NULL)
	{
		newn->next = *Head;
	}
	*Head = newn;
}

void Display(PNODE Head)
{
	printf("Elements of linked list are : \n");
	
	while(Head != NULL)
	{
		printf("|%d|->",Head->data);
		Head = Head->next;
	}
	printf("NULL\n");
}

int Summation(PNODE Head)
{
	int iSum = 0;
	
	while(Head != NULL)
	{
		iSum = iSum + (Head->data);
		Head = Head->next;
	}
	return iSum;
}

int Maximum(PNODE Head)
{
	int iMax = 0;
	if(Head != NULL)
	{
		iMax = Head->data;
	}
	
	while(Head != NULL)
	{
		if(Head->data > iMax)
		{
			iMax = Head->data;
		}
		Head = Head->next;
	}
	return iMax;
}

int Frequency(PNODE Head, int iNo)
{
	int iCnt = 0;
	
	while(Head != NULL)
	{
		if(Head->data == iNo)
		{
			iCnt++;
		}
		Head = Head->next;
	}
	return iCnt;
}

void DisplayPerfect(PNODE Head)
{
	int iNo = 0,i = 0;
	int iSum = 0;
	
	while(Head != NULL)
	{
		iNo = Head->data;
		
		for(i=1;i<= iNo/2;i++)
		{
			if(iNo %1==0)
			{
				iSum = iSum + i;
			}
		}
		if(iSum == iNo)
		{
			printf("%d is perfect number\n",iNo);
		}
		iSum = 0;
		Head = Head->next;
	}
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	
	InsertFirst(&First,50);
	InsertFirst(&First,496);
	InsertFirst(&First,30);
	InsertFirst(&First,24);
	InsertFirst(&First,6);
	
	Display(First);
	
	DisplayPerfect(First);
	
	return 0;
}