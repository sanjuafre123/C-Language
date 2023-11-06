#include<stdio.h>

main()
{
	int a;
	printf("Enter The Value :");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("The number Is Positive.");
	}
	else
	{
		if(a==0)
		{
			printf("The number Is Neutral.");
		}
		else
		{
			printf("The number Is Negative.");
		}
	}
}
