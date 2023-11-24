#include<stdio.h>
main()
{
	int a=1;
	int fac=1;
	int n;
	printf("enter the value n:");
	scanf("%d",&n);
	
	n:
	fac=fac * a;
	a++;
	
	if(n>=a)
	{
		goto n;
	}
	printf("%d",fac);
	
	
}
