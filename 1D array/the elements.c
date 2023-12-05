#include<stdio.h>
main()
{
	int i,n;
	
	printf("Enter the array of size : ");
	scanf("%d",&n);
	
	int a[n],b[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		b[i] = a[i];
	}
	for(i=0; i<n; i++)
	{
		printf("a is %d : %d\n",i,a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("b is %d : %d\n",i,b[i]);
	}

	

}
