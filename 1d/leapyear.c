#include<stdio.h>
main()
{
	int start,end;
	printf("the value starting :");
	scanf("%d",&start);
	printf("the value ending :");
	scanf("%d",&end);
	int lenght = end -start;
	int leap=lenght/4 +1;
	int leapyear[leap];
	int i,x=0;
	
	for(i=start; i<=end; i++)
	{
		if(i%4==0)
		{
			leapyear[x]=i;
			x++;
		}
	}
	for(i=0; i<x; i++)
	{
		printf("%d ",leapyear[i]);
	}
	
	
}
