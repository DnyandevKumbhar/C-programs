#include<stdio.h>
int main()
{
	int no,rem=0,flag=0;
	printf("Enter any number:");
	scanf("%d",&no);
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		

	if(rem==0)
	{
		flag=1;
		break;
		
	}
		}
		
	if(flag)
	{
		printf("Number is duck");
	}
	else
	{
		printf("Number is not duck");
		
	}
}
