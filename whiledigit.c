#include<stdio.h>
int main()
{
	int no,count=0;
	printf("Enter number:\t");
	scanf("%d",&no);
	while(no!=0)
	{
		no=no/10;
		count++;
	}
	printf("Number of digits are:%d",count);
}
