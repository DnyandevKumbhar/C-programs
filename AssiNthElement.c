#include<stdio.h>

int main()
{
	int size,i,j,temp,k;
	printf("Enter the size of array\t");
	scanf("%d",&size);
	int a[size];
	printf("Enter values in array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
//	len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<size;i++)
	{
		for(j=(i+1);j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	printf("Enter any index for  find smallest number:\n");
	scanf("%d",&k);
	printf("Your %dth smallest number in arrray is %d",k,a[k-1]);
	
}
