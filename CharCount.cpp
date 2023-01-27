#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	printf("Enter string value:\t");
	gets(ch);
	int count=0,s=0;
	while(ch[count]!='\0')
	{
		if(ch[count]==' ')
		{
			s++;
		}
		count++;
	}
	
	printf("Number of spaces is:%d",s);
	printf("\nNumber of characters in string is: %d",count-s);

}
