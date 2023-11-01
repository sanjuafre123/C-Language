#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,z,ans;
	printf("enter the value x:");
	scanf("%d",&x);
	printf("enter the value y:");
	scanf("%d",&y);
	printf("enter the value z:");
	scanf("%d",&z);
	
	ans=3*(x+y)*(y*z+y*x+z*z+z*x);
	
	printf("%d",ans);
	
	
	
}
