#include<stdio.h>
int sum(int x)
{
	if(x==1)
	{
		return 1;
	}
	return x + sum(x-1);
	
}
main()
{
	int x;
	printf("Enter The Number :");
	scanf("%d",&x);
	
	printf("sum is %d",sum(x));
	
}
