#include<stdio.h>

int main()
{
	int a[5],b[5],c[10],i,k;
	printf("Enter five values in first array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter five values in second array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0,k=0;i<5;i++,k++)
	{
		c[i]=a[i];
	}
	for(i=0;i<5;i++,k++)
	{
		c[k]=b[i];
	}
	printf("Display array after merging\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",c[i]);
	}
	return 0;
}
