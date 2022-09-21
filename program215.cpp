#include<iostream>
using namespace std;

template<class T>
T Maximum(T Arr[],int size)
{
	T Max = Arr[0];
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
	
	float Crr[]={10.11,20.11,30.11,40.11,50.11};
	float fRet = Maximum(Crr,5);
    cout<<"Maximum is : "<<fRet<<endl;
	return 0;
}
