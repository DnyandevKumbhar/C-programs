#include<stdio.h>

int main()
{
	int i,no,sum=0;
	printf("Enter Number:\t");
	scanf("%d",&no);
	i=0;
	while(i<=no)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
			sum=sum+i;
			
		}
		i++;
	}
	printf("Sum of all even numbers up to %d is : %d",no,sum);
}
