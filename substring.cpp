#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100],sub[100];
	printf("Enter values in string:\t");
	gets(ch);
	printf("Enter substring to find:\t");
	gets(sub);
	int len=strlen(ch);
	int slen=strlen(sub);
	int flag=0;
	if(slen<=len)
	{
		
		for(int i=0;i<slen;i++)
		{
			for(int j=0;j<len;j++)
			{
				if(sub[i]==ch[j])
				{
					flag=1;
				}
			}
		}
	}
	else
	{
		printf("Wrong substring entered...!");
	}
	if(flag)
	{
		printf("Substring found..!");
	}
	else
	{
		printf("Substring not found..:(");
	}
}
