#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	int b[n];
	int c[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("Enter the value of b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<n; i++)
	{
		c[i] = a[i] + b[i];
	}	
	for(i=0; i<n; i++)
	{
		printf("c[%d] = %d\n",i,c[i]);
	}
}
