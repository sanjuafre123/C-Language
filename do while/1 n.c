#include<stdio.h>
main()
{
	int a=1;
	int n;
	
	printf("enter the value a:");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",a);
		a++;
	}while(a<=n);
}
