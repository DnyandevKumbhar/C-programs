#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100],rev,len,mid,start,temp;
	printf("Enter values in string:\t");
	gets(ch);
	int count=0;
	while(ch[count]!='\0')
	{
		count++;
	}
//	len=strlen(ch);
   // printf("%d",count);
	mid=count/2;
//	printf("%d",mid);
	int end=count-1;
	for(start=0;start<mid;start++)
	{
		temp=ch[start];
		ch[start]=ch[end];
		ch[end]=temp;
		end--;
	}
	printf("\nString after reverse:\t%s",ch);
}
