#include<stdio.h>
#include<string.h>

int main()
{
	char ch[100];
	int count=0,i,len,j;						//i love india
	printf("Enter values in string:\t");
	gets(ch);
	len=strlen(ch);
	for(i=0;i<len;i++)
	{
		for(j=(i+1);j<len;j++)
		{

		if(ch[i]>ch[j])
		{
			char t=ch[i];
			ch[i]=ch[j];
			ch[j]=t;
		}
		}
	}
//	printf("%s",ch);	
	for(i=0;i<len;i++)
	{
		if(ch[i]==ch[i+1])
		{
			count++;
		}
		else
		{
			printf("\nNumber of letter %c is occured %d times",ch[i],count);
			count=1;
		}
					
	} 
		
}
