#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CountWhiteSpaces(char Fname[])
{
	int iRet = 0 , fd = 0 , i = 0 , iCnt = 0;
	char Data[FILESIZE];
	
	fd = open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		for(i=0;i<iRet;i++)
		{
			if(Data[i] == ' ')
			{
				iCnt++;
			}
		}
	}

    close(fd);
	return iCnt;
}

int main()
{
	int iRet = 0;
	char Fname[20];
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	iRet = CountWhiteSpaces(Fname);
	printf("Number of white spaces are : %d\n",iRet);
	                              
    return 0;                                           
}