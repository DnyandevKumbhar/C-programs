#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter number:\t");
	scanf("%d",&n);
	i=0;
	while(i<=n)
	{
		sum=sum+i;
		i++;
		}
		printf("Sum of all numbers upto %d is:%d",n,sum);	
}
