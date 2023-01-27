#include<stdio.h>
void main()
{
	int no,count=0;
	printf("Enter any number:\t");
	scanf("%d",&no);
	while(no!=0)
	{
		no=no/10;
		count++;
		}	
		printf("Count of digits are :%d",count);
}
