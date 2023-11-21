#include<stdio.h>
main()
{
	int a=2,n;
	printf("enter value n:");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",a);
		a+=2;
	}while(a<=n);
}
