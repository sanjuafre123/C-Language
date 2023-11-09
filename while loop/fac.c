#include<stdio.h>
main()
{
	int a=1,n,fac=1;
	printf("enter value n:");
	scanf("%d",&n);
	
	while(n>=a)
	{
		fac =fac * a;
		a++;
	}
	printf("fac is :%d",fac);
}
