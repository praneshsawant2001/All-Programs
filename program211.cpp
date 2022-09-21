#include<iostream>
using namespace std;

template <class T>
T Addition(T A, T B)
{
	T Ans;
	Ans = A + B;
	return Ans;
}

int main()
{
	int No1 = 11, No2 = 21;
	int Ret = 0;
	Ret = Addition(No1,No2);
	cout<<"Addition is : "<<Ret<<endl;
	
	float fNo1 = 11.89, fNo2 = 21.90;
	float fRet = 0.0;
	fRet = Addition(fNo1,fNo2);
	cout<<"Addition is : "<<fRet<<endl;


	return 0;
}