#include<stdio.h>

int main()
{
	int a[10],i,j,count,o[10];
	printf("Enter ten values in array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	count=1;
	for(i=0;i<10;i++)
	{
		
		
	//	for(j=(i+1);j<10;j++)
		
			
			if(a[i]==a[i+1])
			{
				count++;								
			}	
			else
			{
			printf("Occurence of element %d is %d time:\t\n",a[i],count);	
				count=1;
			}	
					
	}
	
	
}
