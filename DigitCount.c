#include<stdio.h>

int main()
{
	long int no,rem=0,count=0;
	printf("Enter Number:\t");
	scanf("%ld",&no);
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		count++;
	}
	printf("Count of Digits is %ld",count);
}
