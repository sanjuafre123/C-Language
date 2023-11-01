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
	
	ans= x*2 + y*2 + z*2 + x*x*y + y*y*z + x*x*z;

	
	printf("%d",ans);
	
	
	
}
