#include<stdio.h>
main()
{
	int a=1;
	int n;
	int fac=1;
	
	printf("enter the value n :");
	scanf("%d",&n);
	
	for(a; a<=n; a++)
	{
		fac=fac * a;
	}
	printf("fac is :%d",fac);
}
