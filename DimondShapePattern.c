#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		int flag=1;
		for(j=1;j<=9;j++)
		{
			if((j>=6-i && j<=4+i && i<=5 && flag) || (j>=i-4 && j<=14-i && i>5 && flag))
			{
				printf("*");
				flag=0;
			}
			else
			{
				flag=1;
				printf(" ");
			}
				
		}
		printf("\n");
	}
	return 0;
}
