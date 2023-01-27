#include<stdio.h>

int main()
{
	void add(int,int);
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	add(a,b);
	
	
}
	void add(int x,int y)
	{
		printf("Addtion is: %d",x+y);
	}
