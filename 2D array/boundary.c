#include<stdio.h>
main()
{
	
	int n,m;
	printf("enter the size of n:");
	scanf("%d",&n);
	printf("enter the size of m:");
	scanf("%d",&m);
	
	int a[5][5];

	int i,j;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("enter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i==0 || i==4 || j==0 || j==4)
			{
				printf("%d",a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
		
}
