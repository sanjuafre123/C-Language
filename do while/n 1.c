#include<stdio.h>
main()
{
	int a=1;
	int n;
	
	printf("enter the value a:");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",n);
		n--;
	}while(a<=n);
}
