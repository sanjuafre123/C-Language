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
	
	ans= (x*3)- (y*3)- (z*3)- (3*x*2*y)+ (3*y*2)- (3*y*2*z)- (3*y*z*2)+ (3*x*z*2)- (3*x*2*z)+ (6*x*y*z);
	
	printf("%d",ans);
	
	
	
}
