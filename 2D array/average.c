//Q.1 Write a Program to find the average of a given 2D array.
#include<stdio.h>
main()
{
	
	int n,m;
	printf("enter the size of n:");
	scanf("%d",&n);
	printf("enter the size of m:");
	scanf("%d",&m);
	
	int a[n][m];
	float ave;
	int i,j,sum=0;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("enter the value of a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			sum=sum+a[i][j];
			
		}
	}
	int op=n*m;
	ave=sum/op;
	printf("avarege is : %.2f",ave);
	
	
	
	
	
	
}
