#include<stdio.h>

int main()
{
	int no,rem,flag=1,i;
	printf("Enter number:");
	scanf("%d",&no);
	i=2;
	while(i<no)
	{
		rem=no%i;
		
		if(rem==0)
		{
			flag=0;
			break;
		}
		i++;
	}
	if(flag)
	{
		printf("Number is prime number");
	
	}
	else
	{
		printf("Number is not prime number");
	}
}
