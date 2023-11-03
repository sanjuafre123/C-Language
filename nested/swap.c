#include<stdio.h>
main()
{
	int a;
	int b;
	printf("enter the value a :");
	scanf("%d",&a);
	printf("enter the value b :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("swap value a=%d\n",a);
	printf("swap value b=%d",b);
	
	
	
	
}
