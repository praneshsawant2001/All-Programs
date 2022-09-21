#include<iostream>
using namespace std;

int Maximum(int Arr[],int size)
{
	int Max = Arr[0];
	int i = 0;
	
	for(i=0;i<size;i++)
	{
		if(Arr[i]>Max)
		{
			Max = Arr[i];
		}
	}
	return Max;
}

int main()
{
	int iRet = 0;
	int Brr[]={10,20,30,40,50};
	
	iRet = Maximum(Brr,5);
	
	cout<<"Maximum is : "<<iRet<<endl;
	
	return 0;
}
