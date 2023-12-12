//2. WAP to convert given string in uppercase.
#include<stdio.h>
main()
{
	int n;
	printf("enter the value char :");
	scanf("%d",&n);
	
	char a[n];
	int i;
	
	printf("enter the value of :");
	scanf("%s",a);
	int lenght=0;
	for(i=0; i<a[i]; i++)
	{
		lenght++;	
	}
	printf("lenght is %d",lenght);
	
}
