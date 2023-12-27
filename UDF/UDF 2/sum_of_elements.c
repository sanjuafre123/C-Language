#include<stdio.h>
int fun(int a[],int n)
{
	int sum=0;
	int i;
	for(i=0; i<5; i++)
	{
		sum=sum+a[i];
	}
	return sum;	
}
main()
{
	int n;
	int a[10];
	printf("enter the elements :");
	scanf("%d",&n);
	int i;
	for(i=0; i<5; i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	int sum= fun(a,n);
	printf("sum is %d",sum);
}
