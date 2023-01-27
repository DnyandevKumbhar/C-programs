#include<stdio.h>
#include<string.h>
int main()
{
	char fs[100];
	char ss[100];
	int i,j;
	printf("\nEnter first string:\t");
	gets(fs);
	printf("\nEnter second  string:\t");
	gets(ss);
	int fl=strlen(fs);
	int sl=strlen(ss);
	if(fl==sl)
	{
		int flag=0;
		for(i=0;i<fl;i++)
		{
			for(j=0;j<sl;j++)
			{
				if(fs[i]=ss[j])
				{
					flag=1;
					break;
					
				}
			}
		}
		if(flag)
		{
			printf("\nStrings are Anagram..!");
		}
		else
		{
			printf("\nStrings are not anagram...");
		}
	}
	else
	{
		printf("\nStrings are not anagram...");
	}
}
