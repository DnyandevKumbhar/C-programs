#include<stdio.h>

int main()
{
	int no,f=1,sum=0,rem,ogno;
	printf("Enter number:\t");
	scanf("%d",&no);
	ogno=no;
	while(no!=0)
	{
		rem=no%10;
	
		while(rem!=0)
		{
			f=f*rem;
		//	printf("%d\n",f);

			rem--;		
		}
		
		sum=sum+f;
		no=no/10;		
	}
	
	printf("%d",sum);
	if(sum==ogno)
	{
		printf("Number is Strong number..");
	}
	else
	{
		printf("Number is not strong number.");
	}
	return 0;
}
