#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the value a:");
	scanf("%d",&a);
	printf("enter the value b:");
	scanf("%d",&b);
	printf("enter the value c:");
	scanf("%d",&c);
	
	
	(a>b)?(a>c)? printf("a is maximum"):printf("c is maximum"):(b>c)?printf("b is maximum"):printf("c is maximum");
}
