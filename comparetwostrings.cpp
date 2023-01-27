#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	char s2[100];
	int i=0,flag=1,diff,l1,l2;
	printf("Enter values in first string:\t");
	gets(s1);
	printf("Enter values in second string:\t ");
	gets(s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1==l2)
	{
		while(s1[i]!=0)
		{
			diff=s1[i]-s2[i];
			if(diff!=0)
			{
				flag=0;
				break;
			}
		
			i++;
		}
		if(flag)
		{
		printf("Strings are equal...!");	
		}
		else
		{
		printf("Strings are not equal...:(");
		}
	}
	else
	{
		printf("Strings are not equal...:(");
	}
}
