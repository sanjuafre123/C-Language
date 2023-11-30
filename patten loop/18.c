#include<stdio.h>
main()
{

	int i,j,k;
	
	for(i=5; i>=1; i--)
	{
		for(k=i; k>1; k--)
		{
			printf(" ");
		}
		for(j=i; j<=5; j++)
		{
			if(i%2==1)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	
}
