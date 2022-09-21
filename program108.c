#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		newn->next=*head;
		*head = newn;
	}
}
void InsertLast(PPNODE head,int no)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		temp = *head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next=newn;
	}
}

void Display(PNODE head)
{
	printf("Elements from linked list are :\n");
	
	while(head != NULL)
	{
		printf("|%d|->",head->data);
		head = head->next;
	}
	printf("NULL\n");
}

int Count(PNODE head)
{
	int iCnt=0;
	
	while(head != NULL)
	{
		iCnt++;
		head = head->next;
	}
	return iCnt;
}

void DeleteFirst(PPNODE head)
{
	PNODE temp = NULL;
	
	if(*head == NULL)
	{
		return;
	}
	else
	{
		temp = *head;
		*head = temp->next;    //*head = *head->next;
		free(temp);
	}
}

void DeleteLast(PPNODE head)
{
	PNODE temp = NULL;
	
	if(*head == NULL)
	{
		return;
	}
	else if((*head) -> next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		temp = *head;
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void InsertATPos(PPNODE head,int no, int pos)
{
	int size=0,cnt=0;
	PNODE newn = NULL;
	PNODE temp = NULL;
	
	
	size = Count(*head);
	
	if((pos<1) || (pos>(size+1)))
	{
		printf("Position is invalid\n");
		return;
	}
	if(pos == 1)
	{
		InsertFirst(head,no);
	}
	else if(pos == (size+1))
	{
		InsertLast(head,no);
	}
	else
	{
		PNODE newn = NULL;
	
	    newn = (PNODE)malloc(sizeof(NODE));
	
	    newn->data = no;
	    newn->next = NULL;
		
		temp = *head;
		
		for(cnt=1;cnt<pos-1;cnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
	}
}

void DeleteATPos(PPNODE head,int pos)
{
	int size=0,cnt=0;
	PNODE temp = NULL;
	PNODE tempdelete = NULL;
	
	
	size = Count(*head);
	
	if((pos<1) || (pos>size))
	{
		printf("Position is invalid\n");
		return;
	}
	if(pos == 1)
	{
		DeleteFirst(head);
	}
	else if(pos == size)
	{
		DeleteLast(head);
	}
	else
	{
		temp = *head;
		
		for(cnt=1;cnt<pos-1;cnt++)
		{
			temp = temp->next;
		}
		tempdelete = temp->next;
		temp->next = temp->next->next;
		free(tempdelete);
	}
}

int main()
{
	int iret=0;
	PNODE first = NULL;
	
	InsertFirst(&first,101);
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	
	InsertATPos(&first,75,3);
	
	DeleteATPos(&first,3);
	
	Display(first);
	iret = Count(first);
	printf("Number of nodes are : %d\n",iret);
	
	InsertFirst(&first,1);
	
	Display(first);
	iret = Count(first);
	printf("Number of nodes are : %d\n",iret);
	
	InsertLast(&first,111);
	InsertLast(&first,121);
	
	Display(first);
	iret = Count(first);
	printf("Number of nodes are : %d\n",iret);
	
	DeleteFirst(&first);
	DeleteFirst(&first);
	
	Display(first);
	iret = Count(first);
	printf("Number of nodes are : %d\n",iret);
	
	DeleteLast(&first);
	
	Display(first);
	iret = Count(first);
	printf("Number of nodes are : %d\n",iret);
	
	return 0;
}