#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,ans;
	printf("enter the value a:");
	scanf("%d",&x);
	printf("enter the value b:");
	scanf("%d",&y);
	
	ans=x*x*x + 3*x*x*y + 3*x*y*y + y*y*y;
	
	printf("%d",ans);
	
	
	
}
