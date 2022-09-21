#include<iostream>
using namespace std;

class Arrayx
{
	private:
	  int *Arr;
	  int iSize;
	  
	public:
	  Arrayx(int iValue)    //parametarised constructor
	  {
		  this->iSize = iValue;
		  Arr = new int[iSize];   //Allocate the resource
	  }
	  
	  ~Arrayx()      //Destructor
	  {
		  delete []Arr;     //Deallocate the resource
	  }
	  
	  void Accept()
	  {
		  int iCnt=0;
		  cout<<"Enter the elements"<<endl;
		  
		  for(iCnt=0;iCnt<iSize;iCnt++)
        	{
	        	cin>>Arr[iCnt];
        	}
	  }
	  
	  void Display()
	  {
		  int iCnt=0;
		  
		  cout<<"Elements of Array are"<<endl;
		  
		  for(iCnt=0;iCnt<iSize;iCnt++)
        	{
	        	cout<<Arr[iCnt]<<endl;
        	}
	  }
	  
	  int Summation()
        {
	        int iSum=0,iCnt=0;
	
	        for(iCnt=0;iCnt<iSize;iCnt++)
        	{
	        	iSum=iSum+Arr[iCnt];
        	}
        	return iSum;
        }
};

int main()
{
	int iRet=0;
	
	Arrayx obj1(5);
	
	obj1.Accept();
	obj1.Display();
	
	iRet=obj1.Summation();
	
	cout<<"Addition is : "<<iRet<<endl;
	
	return 0;
}