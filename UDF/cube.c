//Q.1 Write a Program to find the cube of a given number using UDF.
#include<stdio.h>
int cube(int a)
{
	int cube;
	cube=a*a*a;
	return cube;
}
main()
{
	int a;
	printf("enter the value :");
	scanf("%d",&a);
	
	int x=cube(a);
	printf("%d",x);
	
}
