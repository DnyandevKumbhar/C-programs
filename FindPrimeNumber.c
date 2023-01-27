#include<stdio.h>

int main()
{
	int no,i,j;
	printf("Enter number:\t");
	scanf("%d",&no);
	for(i=no;i<=no;i--)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==1)
			
			printf("%d\n",i);
		}
		printf("%d\n",i);
		
		
	}
	return 0;
}
