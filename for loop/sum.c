#include<stdio.h>
main()
{
	int a=1;
	int n;
	int sum=0;
	
	printf("enter the value n :");
	scanf("%d",&n);
	
	for(a; a<=n; a++)
	{
		sum=sum+a;
	}
	printf("sum is :%d",sum);
}
