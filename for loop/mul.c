#include<stdio.h>
main()
{
	int a=1;
	int n;
	int mul=1;
	
	printf("enter the value n :");
	scanf("%d",&n);
	
	for(a; a<=10; a++)
	{
		mul=mul * a;
		printf("%d * %d= %d\n",n,a,n*a);
	}
}
