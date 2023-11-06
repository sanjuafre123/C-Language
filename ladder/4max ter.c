#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the value a:");
	scanf("%d",&a);
	printf("enter the value b:");
	scanf("%d",&b);
	printf("enter the value c:");
	scanf("%d",&c);
	printf("enter the value d:");
	scanf("%d",&d);
	
	
	(a>b)?(a>c)?(a>d)?("a is max"):printf("d is max"):(c>d)?printf("c is max"):printf("d is max"):(b>c)?(c>d)?printf("c is max"):printf("d is max"):(c>d)?printf("c is max"):printf("d is max");                                                      
}
