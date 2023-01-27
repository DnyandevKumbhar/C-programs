#include<stdio.h>

int main()
{
	int a[10],i,j;
	printf("Enter ten values in array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Even numbers in array are:\n");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\t",a[i]);
		}
		
	}
	printf("Odd numbers in array are:\n");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==1)
		{
			printf("%d\t",a[i]);
		}
	}
}
