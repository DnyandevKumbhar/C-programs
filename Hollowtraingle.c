#include<stdio.h>

int main()
{																					//  1 2 3 4 5 6 7 		
	int i,j;                                                            //			1		*														//							
	for(i=1;i<=4;i++)													//			2	  *   *	
	{																	//          3   *       *
		for(j=1;j<=7;j++)												//			4 * * * * * * *	  
		{																//
			if(j==(5-i) || j==3+i|| i==4)								//
			{															//
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
