#include<stdio.h>
main()
{
	int a=1;
	int n;
	int sum=0;
	
	printf("enter the value a:");
	scanf("%d",&n);
	
	do
	{
		sum=sum+a;
		a++;
	}while(a<=n);
	
	printf("sum is %d",sum);
}
