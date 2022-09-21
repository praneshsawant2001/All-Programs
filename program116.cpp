// Factorial

#include<iostream>
using namespace std;

class Number
{
	private:
	  int iNo;
	  
	public:
	void Accept()     //setter method
	{
		cout<<"Enter the value :"<<endl;
		cin>>this->iNo;
	}
	
	void Display()    //Getter method
	{
		cout<<"Value is : "<<this->iNo<<endl;
	}
	
    int Factorial()
    {
     	int iFact=1;
    	int iCnt=0;
	
    	for(iCnt=1;iCnt<=iNo;iCnt++)
    	{
    		iFact=iFact*iCnt;
     	}
	    return iFact;
    }
};
int main()
{
	Number nobj;
	int iRet = 0;
	
	//cout<<nobj.iNo;
	
	nobj.Accept();
	nobj.Display();
	
	iRet = nobj.Factorial();
	
	cout<<"Factorial is : "<<iRet<<endl;
	
	return 0;
}