#include<stdio.h>
main()
{
	int a,n;
	printf("enter the value n:");
	scanf("%d",&n);
	
	for(a=1; a<=10; a++)
	{
		if(a==n)
		{
			continue;
		}
		printf("%d ",a);
	}
}
