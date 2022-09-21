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
	struct node *Head;
	int Count;
};

int main()
{
	SinglyLL<int>obj1;
	
	return 0;
}
