#include<stdio.h>
void main()
{
	int i,b,p;
	printf("Enter base:\t");
	scanf("%d",&b);
	printf("Enter index:\t");
	scanf("%d",&i);
	p=1;
	
	while(i!=0)
	{
		p=p*b;
		i--;
	}	
		printf("Power is:%d",p);
	

}


	
