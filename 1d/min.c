#include<stdio.h>
main()
{
	int n,i,min;
	printf("enter the value of N :");
	scanf("%d",&n);
	
	int a[100];
	
	
	for(i=0; i<n; i++)
	{
		printf("enter the value a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	min=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i] < min);
		{
			min=a[i];
		}
	}
	printf("min value :%d \n",min);
}
