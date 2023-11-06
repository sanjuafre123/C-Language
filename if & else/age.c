#include<stdio.h>

main()
{
	int age;
	printf("Enter The Age :");
	scanf("%d",&age);
	
	if(age>0)
	{
		if(age>100)
		{
			printf("Enter The Age ...");
		}
		else
		{
			printf("You Entered Valid Age...");
		}
	}s
	else
	{
		if(age==0)
		{
			printf("You Entered Neutral Age...");
		}
		else
		{
			printf("You Entered Invalid Age...");
		}
	}
}
