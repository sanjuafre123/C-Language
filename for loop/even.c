#include<stdio.h>
main()
{
	int a=2;
	int n;
	
	printf("enter the value n :");
	scanf("%d",&n);
	
	for(a; a<=n; a+=2)
	{
		printf("%d ",a);
	}
}
