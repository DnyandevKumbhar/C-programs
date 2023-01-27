#include<stdio.h>
int i=1;
int even(int no,int i)
{
	if(i<=no && i%2==0)
	{

		printf("%d\t",i);		
	}
	even(no,++i);
return i;
}
int main()
{
	int no;
	printf("Enter number as limit :\t");
	scanf("%d",&no);
	even(no,i);	
}
