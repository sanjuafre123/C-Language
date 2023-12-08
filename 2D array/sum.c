//Write a Program to perform the addition operation of two 2D arrays & store it in another array.
// Keep in mind that both array sizes must be the same.
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
	int sum[n][m];
	
	int i,j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("enter the value ofa[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",a[i][j]);
		}
	}printf("\n");
		for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("enter the value ofa[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",b[i][j]);
		}
	}printf("\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			sum[i][j]=a[i][j] + b[i][j];
		}
	}printf("\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",sum[i][j]);
		}
	}
	
	
	

	
	
}
