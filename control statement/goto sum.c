#include<stdio.h>
main()
{
	int a=1;
	int sum=0;
	int n;
	printf("enter the value n:");
	scanf("%d",&n);
	
	n:
	sum=sum + a;
	a++;
	
	if(n>=a)
	{
		goto n;
	}
	printf("%d",sum);
	
	
}
