#include<stdio.h>
int main()
{
	int a[6],t[6],i,j,count=0,temp;
	printf("Enter ten values in array:\n");
	for(i=0;i<6;i++)
	{		
	scanf("%d",&a[i]);
	}
	printf("Display array:\t");
	for(i=0;i<6;i++)
	{		
	printf("%d\t",a[i]);
	}
	for(i=0;i<6;i++)
	{
		for(j=(i+1);j<6;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<6;i++)
	{	
		if(a[i]!=a[i+1])
		{
			t[count]=a[i];
			count++;
		}
		
	}
	for(i=0;i<count;i++)
	{
		a[i]=t[i];
	}
	printf("\nDisplay array after removing duplicate elements:\n");
	for(i=0;i<count;i++)
	{		
	printf("%d\t",a[i]);
	}
}
