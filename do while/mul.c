#include<stdio.h>
main()
{
	int x=1;
	int y;
	 
	printf("enter the value :");
	scanf("%d",&y);
	
	do
	{
		printf("%d *%d=%d\n",y,x,y*x);
		x++;
	}while(x<=10);
}

