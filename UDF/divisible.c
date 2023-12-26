//Q.2 Write a Program to check if a given number is divisible by both 3 & 5 or not by using UDF.
#include<stdio.h>
void divisible(int a)
{
	if(a%3==0 || a%5==0)
	{
		printf("divisible by 3 & 5.");
	}
	else if(a%3==0)
	{
		printf("divisible by 3.");	
	}
	else if(a%5==0)
	{
		printf("divisible by 5.");
	}
	else
	{
		printf("divisible not by 3 & 5.");
	}
	
}
main()
{
	int a;
	printf("enter the value :");
	scanf("%d",&a);
	divisible(a);	
}
