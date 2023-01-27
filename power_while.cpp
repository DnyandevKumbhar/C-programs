#include<stdio.h>
void main()
{
	int i,b,p,power;
	printf("Enter base and index:");
	scanf("%d %d",&b,&p);
	i=1;
	while(i<=p)
	{
		power=b*b;
		p--;
	}
	printf("Power is %d",power);
}
