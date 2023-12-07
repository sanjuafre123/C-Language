#include<stdio.h>
main()
{
	int n,i,j,acc;
	printf("enter the value :");
	scanf("%d",&n);
	
	int a[10]={8,6,3,2,5,4};
	for(i=0; i<n; i++)
	{
		printf("enter the value array a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				acc=a[i];
				a[i]=a[j];
				a[j]=acc;
			}
		}

	}
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
	
}
