//Write a Program to find the sum of diagonal elements from a given 2D array.
#include<stdio.h>
main()
{
	
	int n,m;
	printf("enter the size of n:");
	scanf("%d",&n);
	printf("enter the size of m:");
	scanf("%d",&m);
	
	int a[n][m];
	int b[n][m];
	int sum=0;
	
	int i,j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("enter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d",a[i][j]);
		}
	}printf("\n\n");
	for(i=0; i<n; i++)
	{
		sum =sum + a[i][i];
	}
	printf("digonal is :%d\n",sum);
		
}
