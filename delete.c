#include<stdio.h>

int main()
{
	int a[5],i,value;
	int len=sizeof(a)/sizeof a[0];
	printf("Enter five values in array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter value for delete:\t");
	scanf("%d",&value);
	for(i=0;i<5;i++)
	{
		if(a[i]==value)
		{
		a[i]=a[i+1];	
		}

	}
	for(i=0;i<len-1;i++)
	{
		printf("%d\t",a[i]);
	}
}
