#include<stdio.h>

int main()
{
	 int n,n1=0,n2=1,n3=0;
	 printf("Enter thr number : ");
	 scanf("%d",&n);
	 printf("%d\t%d\t",n1,n2);
	 while(n3<=n)
	 {
	 		n3=n1+n2;
	 	if(n3<n)
		 {
	 	printf("%d\t",n3);
	 	n1=n2;
	 	n2=n3;
		 }
	 	
	 }
	
}
