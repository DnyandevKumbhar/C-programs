#include<stdio.h>
void main()
{
	int i,no,sum=0;
	printf("Enter number:\t");
	scanf("%d",&no);
	i=0;
	while(i<=no)
	{
		if(i%2==1)
	{
			sum=sum+i;
			printf("%d\n",i);
		}
		i++;
		
	}

	printf("Sum of all odd number upto %d is %d",no,sum);
}
