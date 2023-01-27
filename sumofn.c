#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter number:\t");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==0)
		sum=sum+i;
		i++;
	}
	printf("Sum is %d",sum);
}
