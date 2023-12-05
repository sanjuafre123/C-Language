//1.WAP to get & print 1D array of N elements.
#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	int a[n];
	int sum=0;
	int  average;
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("enter the value :");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
		sum=sum+a[i];
	}
	printf("\nsum is : %d",sum);
	printf("\n average is : %d",sum/n);

	
}
