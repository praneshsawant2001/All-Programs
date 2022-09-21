#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;
};

template<class T>
class SinglyLL
{
	public:
	struct node<T> *Head;
	int Count;
	
	SinglyLL();
	void InsertFirst(T);
	void InsertLast(T);
	void Display();
	int CountNode();
	void DeleteFirst();
	void DeleteLast();
	void InsertATPos(T no, T pos);
	void DeleteATPos(T);
};

template<class T>
SinglyLL<T>::SinglyLL()
{
	Head = NULL;
	Count = 0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn->data = no;
	newn->next = NULL;
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		newn->next = Head;
		Head = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::InsertLast(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn->data = no;
	newn->next = NULL;
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		struct node<T> *temp = Head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::Display()
{
	cout<<"Elements from linked list are :"<<endl;
	struct node<T> *temp = Head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

template<class T>
int SinglyLL<T>::CountNode()
{
	return Count;
}

template<class T>
void SinglyLL<T>::DeleteFirst()
{
	struct node<T> *temp = NULL;
	
	if(Head == NULL)
	{
		return;
	}
	else
	{
		temp = Head;
		Head = temp->next;
		free(temp);
	}
	Count--;
}
template<class T>
void SinglyLL<T>::DeleteLast()
{
	struct node<T> *temp = NULL;
	
	if(Head == NULL)
	{
		return;
	}
	else if(Head->next == NULL)
	{
		free(Head);
		Head == NULL;
	}
	else
	{
		temp = Head;
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
	Count--;
}

template<class T>
void SinglyLL<T>::InsertATPos(T no, T pos)
{
	int size=0;cnt=0;
	struct node<T>:: *newn = NULL;
	struct node<T>:: *temp = NULL;
	
	size = CountNode();
	
	if((pos<1) || (pos>(size+1)))
	{
		cout<<"Position is invalid"<<endl;
		return;
	}
	
	if(pos == 1)
	{
		InsertFirst();
	}
	else if(pos == size)
	{
		InsertLast();
	}
	else
	{
		struct node<T> *newn = NULL;
		
		newn = new node<T>;
		
		newn->data = no;
		newn->next = NULL;
		
		temp = Head;
		for(cnt=1;cnt<pos-1;cnt++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::DeleteATPos(T pos)
{
	int size=0,cnt=0;
	struct node<T> *temp = NULL;
	
	size Count();
	
	if((pos<1) || (pos>size))
	{
		cout<<"Position is invalid"<<endl;
		return;
	}
	
	if(pos == 1)
	{
		DeleteFirst();
	}
	else if(pos == size)
	{
		DeleteLast();
	}
	else
	{
		temp = Head;
		
		for(cnt=1;cnt<pos-1;cnt++)
		{
			temp = temp->next;
		}
		temp = temp->next;
		temp->next = temp->next->next;
		free(temp);
	}
	Count--;
}

int main()
{
	SinglyLL<int>obj1;
	SinglyLL<float>obj2;
	
	obj1.InsertFirst(21);
	obj1.InsertFirst(11);
	obj1.InsertLast(51);
	obj1.InsertLast(101);
	
	obj1.Display();
	cout<<"Number of nodes are :"<<obj1.CountNode()<<endl;
	
	obj1.DeleteFirst();
	obj1.Display();
	cout<<"Number of nodes are :"<<obj1.CountNode()<<endl;
	
	obj1.DeleteLast();
	obj1.Display();
	cout<<"Number of nodes are :"<<obj1.CountNode()<<endl;
	
	obj1.InsertATPos(31,3);
	obj1.Display();
	cout<<"Number of nodes are :"<<obj1.CountNode()<<endl;
	
	obj1.DeleteATPos(3);
	obj1.Display();
	cout<<"Number of nodes are :"<<obj1.CountNode()<<endl;
	return 0;
}
