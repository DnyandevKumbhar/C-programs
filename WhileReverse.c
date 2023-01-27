#include<stdio.h>
void main()
{
	int no,rev=0,rem;
	printf("Enetr number :");
	scanf("%d",&no);
	while(no!=0)
	{
		rem=no%10;										//123---3
		no=no/10;										//12
		rev=rev*10+rem;									//3
		
	}
	printf("Reverse number is : %d",rev);
}
