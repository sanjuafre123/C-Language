#include<stdio.h>
main()
{
	int a,b,c,d,f,e;
	printf("enter the value a:");
	scanf("%d",&a);
	printf("enter the value b:");
	scanf("%d",&b);
	printf("enter the value c:");
	scanf("%d",&c);
	printf("enter the value d:");
	scanf("%d",&d);
	printf("enter the value e:");
	scanf("%d",&e);
	
	
	(a>b)?(a>c)?(a>d)?(a>e)?printf("a is max"):printf("e is max"):(d>e)? printf("d is max"):printf("e is max"):(c>d)?(d>e)?printf("d is max"):printf("e is max"):(d>e)?printf("d is max"):printf("e is max"):(c>d)?(d>e)?printf("d is max"):printf("e is max"):(d>e)?printf("d is max"):printf("e is max");                                                     
}
