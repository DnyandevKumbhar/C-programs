#include<stdio.h>

int main()
{
	int a[5],i,value;
	printf("Enter 5values in array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Enter value for search:\t");
	scanf("%d",&value);
	int flag=0;
	for(i=1;i<5;i++)
	{
		if(a[i]==value)
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("Value founded");
	}
	else
	{
		printf("value not faound");
	}
	return 0;
	
}
