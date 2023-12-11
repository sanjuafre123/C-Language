#include<stdio.h>
main()
{
	int n,i,j,acc;
	printf("enter the value :");
	scanf("%d",&n);
	
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("enter the value array a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("enter the value :");
	scanf("%d",&acc);
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i]+a[j]==acc)
			{
				printf("(%d,%d)",a[i],a[j]);
			}
		}

	}

	
}
