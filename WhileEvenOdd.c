#include<stdio.h>

int main()
{
	int no,i;
	printf("Enter number:\t");
	scanf("%d",&no);
	i=1;
	printf("Even numbers are:\t\n");
	while(i<=no)
	{
		if(i%2==0)
		
			printf("%d\n",i);
		i++;
		}
		printf("Odd numbers are:\t\n");
		i=1;
	while(i<=no)
	{
		if(i%2==1)
		printf("%d\n",i);
		i++;
		}	
}
