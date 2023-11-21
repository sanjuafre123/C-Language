#include<stdio.h>
main()
{
	int a=1;
	int n;
	printf("enter value n:");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",a);
		a+=2;
	}while(a<=n);
}
