#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the value a:");
	scanf("%d",&a);
	printf("enter the value b:");
	scanf("%d",&b);
	printf("enter the value c:");
	scanf("%d",&c);
	printf("enter the value d:");
	scanf("%d",&d);

    //a,b,c,d
    if(a>b)
    {
    	//a,c,d
    	if(a>c)
    	{
    		//a,d
    		if(a>d)
    		{
    			//a
    			printf("a is max");
			}
			else
			{
				//d
				printf("d is max");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c is max");
			}
			else
			{
				//d
				printf("d is max");
			}
		}
	}
	else
	{
		//b,c,d
		if(b>c)
		{
			//b,d
			if(b>d)
			{
				//b
				printf("b is max");
			}
			else
			{
				//d
				printf("d is max");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c is max");
			}
			else
			{
				//d
				printf("d is max");
			}
		}
		
	}
}




























	

