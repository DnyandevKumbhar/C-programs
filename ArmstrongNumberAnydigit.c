#include<stdio.h>
#include<math.h>

int main()
{
	int no,rem,a,r=0,ogno,count=0;
	printf("Enter any digit number:");
	scanf("%d",&no);
	ogno=no;                            //value of number will change after divsion so original value is stored in another variable
//	printf("%d",ogno);
	while(no!=0)
	{											
		no=no/10;							
		count++;														
	}
	no=ogno;
	printf("%d",no);
	while(no!=0)
	{
		rem=no%10;
		a=pow(rem,count);	
		r=r+a;
	}
	
	if(ogno==r)
		{
			printf("Number is Armstrong.");
			
		}
		else
		{
			printf("Number is not armstrong.");
			
		}
}
