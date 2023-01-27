#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int i=0;
	printf("Enter values in string:\t");
	gets(ch);
	while(ch[i]!=0)
	{
		if(ch[i]>='a' && ch[i]<='z')
		{
			printf("\nFirst small letter is: %c",ch[i]);
			break;
		}
		i++;
	}
	i=0;
		while(ch[i]!=0)
		{
			if(ch[i]>='A' && ch[i]<='Z')
			{
			printf("\nFirst capital letter is: %c",ch[i]);
			break;
			}
		i++;
		}
}
