#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node * next;
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
	  newn->next = *head;
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
	  temp->next = newn;
  }
}

void Display(PNODE head)
{
	printf("Elements from linked list are : \n");
	
	while(head != NULL)
	{
		printf("|%d|->",head->data);
		head = head->next;
	}
	printf("NULL\n");
}

int Count(PNODE head)
{
	int cnt = 0;
	
	while(head != NULL)
	{
		cnt++;
		head = head->next;
	}
	return cnt;
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
	  *head = temp->next;
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
    else if((*head)->next == NULL)
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

int main()
{
	int ret = 0;
	
	PNODE first = NULL;
	
	InsertFirst(&first,101);
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	InsertFirst(&first,1);
	
	Display(first);
	ret = Count(first);
	printf("Number of nodes in linke list are : %d\n",ret);
	
	InsertLast(&first,111);
	InsertLast(&first,121);
	
	Display(first);
	ret = Count(first);
	printf("Number of nodes in linke list are : %d\n",ret);
	
	DeleteFirst(&first);
	
	Display(first);
	ret = Count(first);
	printf("Number of nodes in linke list are : %d\n",ret);
	
	DeleteLast(&first);
	
	Display(first);
	ret = Count(first);
	printf("Number of nodes in linke list are : %d\n",ret);
  
    return 0;
}