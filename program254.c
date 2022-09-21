#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdbool.h>
#include<string.h>


int main()
{
	char Fname[20];
	int Fd = 0;
	char Data[10];
	
	printf("Enter file name \n");
	scanf("%s",Fname);
	
	Fd = open(Fname,O_RDONLY);
	
	if(Fd == -1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	lseek(Fd,10,0);
	
	read(Fd,Data,5);
	
	write(1,Data,5);
	
	return 0;
}