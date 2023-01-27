#include<stdio.h>
int main()
{
	long int no,i,f;
	printf("Enter number:\t");
	scanf("%ld",&no);
	i=f=1;
	while(i<=no)
	{
		f=f*i;
		i++;
	}
	printf("Factorial is: %ld",f);
	return 0;
}

