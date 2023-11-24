#include<stdio.h>
main()
{
	int a,n;
	printf("enter the value n:");
	scanf("%d",&n);
	
	for(a=1; a<=n; a++)
	{
		printf("%d ",a);
		if(a==n)
		{
			break;
		}
	}
}
