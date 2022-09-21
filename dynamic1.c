#include<stdio.h>
#include<stdlib.h>

 int main()
 {
	int size = 0;
	int *ptr = NULL;

	printf("Enter number of elements\n");
	scanf("%d\n",&size);

	ptr = (int*)malloc(size * sizeof(int));

	if(ptr == NULL)
	{
	   printf("unable to allocate memory\n");
	}
	else
	{
	   printf("memory succesfully allocated\n");
	}
	free(ptr);

	return 0;
 }