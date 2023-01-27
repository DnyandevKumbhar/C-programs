#include<stdio.h>
void main()
{
	int i,no,sum=0;
	printf("Enter number:");
	scanf("%d",&no);
	i=1;
	while(i<no)
	{
		if(no%i==0)
		{
		
		sum=sum+i;
		}
			i++;
				
	}
	if(no==sum)
		{
			printf("Number %d is perfect\n",no);
		}
		else
		{
			printf("Number %d is not perfect\n",no);
		}
	
}
