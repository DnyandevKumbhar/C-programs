#include<stdio.h>

int main()
{
	int a[6],i,index,value;
	printf("Enter five values in array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display array:\n");
	for(i=0;i<6;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}
	printf("Enter index and value:\t");
	scanf("%d\t%d",&index,&value);
	for(i=4;i>=index;i--)
	{
		a[i+1]=a[i];
	}
	a[index]=value;
	
	printf("Display array after  inserting value\n");
	for(i=0;i<6;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}
	return 0;
}
