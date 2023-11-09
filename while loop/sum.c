#include<stdio.h>
main()
{
	int a=1,n;
	int sum=0;
	printf("enter value n:");
	scanf("%d",&n);
	
	while(a<=n)//1<=n
	{
		sum=sum+a;
		a++;
	}
	printf("sum is :%d",sum);
}
