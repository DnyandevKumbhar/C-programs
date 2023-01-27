#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int c1=0,c2=0,c3=0,sp=0,i=0;
	printf("\nEnter values in string:\t");
	gets(ch);
	while(ch[i]!=0)
	{
		if(ch[i]>='a' && ch[i]<='z')
		{
			c1++;
		}
		else if(ch[i]>='A' && ch[i]<='Z')
		{
			c2++;
		}
		else if(ch[i]>='0' && ch[i]<='9')
		{
			c3++;
		}
		else
		{
			sp++;
		}
		i++;
	}
	printf("\nNumber of lower case characters is: %d",c1);
	printf("\nNumber of upper case characters is: %d",c2);
	printf("\nNumber of digits case characters is: %d",c3);
	printf("\nNumber of special symbols case characters is: %d",sp);
}
