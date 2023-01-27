#include<stdio.h>

void main()
{
	int i,sum=0,no;
	printf("Enter number :\t");
	scanf("%d",&no);
	i=0;
	while(i<=no)
	{
		if(i%2==0)
		{
		printf("%d\n",i);	
		sum=sum+i;	
		}
		i++;
		
	}
	printf("Sum is: %d\t",sum);
	
}
