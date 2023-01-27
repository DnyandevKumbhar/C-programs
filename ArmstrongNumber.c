#include<stdio.h>
#include<math.h>

int main()
{
	int no,rem,a,r=0,ogno,n=0;
	printf("Enter any digit number:");
	scanf("%d",&no);
	ogno=no;                            //value of number will change after divsion so original value is stored in another variable
//	printf("%d",ogno);
	while(no!=0)
	{
		rem=no%10;							//eg.no=153 then 3 will seprated					
		no=no/10;							//15
		n++;
		a=pow(rem,n);															
	}
	while(no!=0)
	{

		r=r+a;								//0+9
	}

	//printf("%d\n",n);
	if(ogno==r)
		{
			printf("Number is Armstrong.");
			
		}
		else
		{
			printf("Number is not armstrong.");
			
		}
}
