#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100],c,temp[100];
	int ind,i=0;
	printf("Enter sentence in string:\t");
	gets(ch);
	printf("Enter last character to find word:\t");
	scanf("%c",&c);

	while(ch[i]!='\0')
	{
		if(ch[i]==c && ch[i+1]==' ')							
		{
			 ind=i;	
			 //printf("\nI==%d",i);
			 for(int j=i;ch[j]!=' ' || j==!0;j--)
			{
					
					printf("%c",ch[j]);
			}
		}
		i++;
	}
	
	
	//printf("%s",temp);
	
}
