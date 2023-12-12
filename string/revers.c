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
	scanf("%s",&a);

	for(i=n-1; i>=0; i--)
	{
		printf("%c",a[i]);
	}
	
	
}
