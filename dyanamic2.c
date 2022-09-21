#include<stdio.h>
#include<stdlib.h>
 int main()
 {
	int size = 0;
	int *ptr = NULL;

	printf("enter number of elements\n");
	scanf("%d",&size);

	ptr = (int *)calloc(size,sizeof(int));
 
	if(ptr == NULL)
	{
	   printf("unable to allocate memory\n");
	}
	else
	{
 	   printf("memory successfully allocated\n");
	}
	free(ptr);
	return 0;
 }