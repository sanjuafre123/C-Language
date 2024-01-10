#include<stdio.h>
main()
{
	int n;
	printf("enter the array size :");
	scanf("%d",&n);
	
	int i,max,*ptr;
	int a[10];
	for(i=0; i<10; i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	ptr=a;
	for(i=0; i<10; i++)
	{
		if(*ptr>max)
		{
			max=*ptr;
		}
		ptr++;
	}
	printf("max value is :%d",max);
}
