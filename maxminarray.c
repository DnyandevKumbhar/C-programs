#include<stdio.h>

int main()
{
	int a[5],i,j,temp;
	printf("Enter five values in array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=(i+1);j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Maximum value in array is %d:\t\n",a[4]);
	printf("Minimum value in array is %d:\t",a[0]);
	
	return 0;
	
}
