#include<stdio.h>
#include<string.h>

int main()
{
	char ch[100],*p;
	int count=0;
	p=ch;
	printf("Enter value in string:\t");
	gets(ch);
	while(*p!='\0')
	{
		count++;
		p++;
	}
	printf("length of string is:\t%d",count);
}
