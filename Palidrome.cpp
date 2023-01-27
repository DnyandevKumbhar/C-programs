#include<stdio.h>
int main()
{
	char ch[100],rev,len,mid,start,temp;
	char og[100];
	printf("Enter values in string:\t");
	gets(ch);
	int count=0;
	
	while(ch[count]!='\0')
	{
		count++;
	}
	for(int i=0;i<count;i++)
	{
		og[i]=ch[i];
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
//	printf("\nString after reverse:\t%s",ch);
	int flag=1;
	for(int i=0;i<count;i++)
	{
		if(og[i]!=ch[i])
		{
			flag=0;
			break;
		}		
	}
	if(flag)
	{
		printf("String is palimdrome..!");
	}
	else
	{
		printf("String is not palimdrome..!");
	}
}
