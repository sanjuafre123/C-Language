#include<stdio.h>
main()
{
	int i,j,k,l;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(k=i; k<5; k++)
		{
			printf("  ");
		}
		for(l=i; l>=1; l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}
}
