#include<stdio.h>
int main()
{
	int a[5],i,j,diff;
	printf("Enter five values in array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Missing elements are:\n");
	for(i=0;i<5;i++)
	{
		diff=a[i+1]-a[i];
		if(diff>1)
		{
			for(j=a[i];j<(a[i+1])-1;)
			{
				printf("%d\t",++j);
			}
		}
	}
	return 0;
}
