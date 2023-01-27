#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	char s2[100];
	char con[100];
	int i,k=0;
	printf("\nEnter values in first string:\t");
	gets(s1);
	printf("\nEnter values in second string:\t");
	gets(s2);
	int count1=0;
	while(s1[count1]!='\0')
	{
		count1++;
	}
	
	for(i=0;i<count1;i++)
	{
		con[i]=s1[i];
		k++;
	}
	int count2=0;
	while(s2[count2]!='\0')
	{
		count2++;
	}
	for(i=0;i<count2;i++)
	{
		con[k]=s2[i];
		k++;
	}
	printf("\nConcatenate two string:\t%s",con);

}
