#include<stdio.h>
main()
{
	int a=1;
	int n;
	int fac=1;
	
	printf("enter the value a:");
	scanf("%d",&n);
	
	do
	{
		fac= fac * a;
		a++;
	}while(a<=n);
	
	printf("fac is %d",fac);
}
