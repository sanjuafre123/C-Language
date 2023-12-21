#include<stdio.h>
main()
{
	int a,p=0,x,y;
	printf("enter the value of X :");
	scanf("%d",&x);
	
	a=x;
	
	while(x>0)
	{
		y=x%10;
		p = y + (p*10);
		x=x/10;
	}
	if(p==a)
	{
		printf("plindrom");
	}
	else
	{
		printf("Not palindrom");
	}
}
