#include<stdio.h>
void main()
{
	char ch;
	ch=0;
	printf("All ASCII codes are:\n");
	while(ch>=0 && ch<=255)
	{
		printf("%c\t",ch);
		ch++;
	}

	ch=65;
	printf("\nAplphabets is upper case are:\n");
	while(ch>=65 && ch<=90)
	{
		printf("%c\t",ch);
		ch++;
	}
	printf("\nAplphabets in lower case are:\n");
	ch=97;
	while(ch>=97 && ch<=122)
	{
		printf("%c\t",ch);
		ch++;
	}
	printf("\nNumbers in ASCII are:\n");
	ch=48;
	while(ch>=48 && ch<=57)
	{
		printf("%c\t",ch);
		ch++;
	}
}
