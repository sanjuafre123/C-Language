//1. WAP to get the array and count & remove all duplicate values in the array.
#include<stdio.h>
main()
{
	int n,i,j,count=0;
	
	printf("enter the value array :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter the value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}	
	}
	int check;
	for(i=0; i<n; i++)
	{   check=1;
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				a[j]=-1;	
			}
		}
		if(a[i]!=-1)
		{
			printf("%d",a[i]);
		}	
	}
	printf("duplicate is : %d",count);
}

