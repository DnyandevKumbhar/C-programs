#include<stdio.h>
int main()
{
	int no,i,j,fact;
	printf("Enter number:\t");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		fact=0;
		for(j=1;j<=no;j++)
		{
			if(i%j==0)
			fact++;
			printf("f=%d\n",fact);
			
		}
		if(fact==2)
		printf("%d\n",i);
	}
	
	//return 0;
}

