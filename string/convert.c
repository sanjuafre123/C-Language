//WAP to given string in reverse.
#include<stdio.h>
main()
{
	int n;
	printf("enter the value char :");
	scanf("%d",&n);
	
	char a[n];
	int i;
	
	printf("enter the value of :");
	scanf("%s",a);

	for(i=n-1; i>=0; i--)
	{
		if(a[0]>=97 && a[0]<=122)
		{
			a[0]=a[0] - 32;
		}
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]=a[i] + 32;	
		}
				
	}
	printf("%s",a);
	
	
}
