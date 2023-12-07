#include<stdio.h>
main()
{
	int n,i,max;
	printf("enter the value of N :");
	scanf("%d",&n);
	
	int a[100];
	
	
	for(i=0; i<n; i++)
	{
		printf("enter the value a[%d]",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]>max);
		{
			max=a[i];
		}
	}
	printf("max value :%d\n",max);
}
