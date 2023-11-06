#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the value a:");
	scanf("%d",&a);
	printf("enter the value b:");
	scanf("%d",&b);
	printf("enter the value c:");
	scanf("%d",&c);

    //a,b,c
    if(a>b)
    {
    	//a>c
    	if(a>c)
    	{
    		//a
    		printf("a is max");
		}
		else
		{
			//c
			printf("c is max");
		}
	}
	else
	{
		//b,c
		if(b>c)
		{
		    //b
			printf("b is max");	
		}
		else
		{
			//c
			printf("c is max");
		}
		
	}
	
}
	

