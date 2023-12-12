//1. WAP to convert given string in lowercase.
#include<stdio.h>
main()
{
	int n;
	printf("enter the value char :");
	scanf("%d",&n);
	
	char a[n];
	int i;
	
	printf("enter the value of :");
	scanf("%s",&a);

	for(i=0; i<n; i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]=a[i]+32;
		}
	}
	printf("%s",a);
	
}
