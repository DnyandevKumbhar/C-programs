#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr,size,i;
	printf("Enter size of array:\t");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("Enter data in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Display the all values:\n");
	for(i=0;i<size;i++)
	{
		printf("a[%d]--->%d\n",i,ptr[i]);
	}
}
