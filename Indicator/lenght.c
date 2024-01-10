#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	printf("enter the string :");
	gets(a);
	
	int lenght=strlen(a);
	int *ptr=lenght;
	
	printf("%d",ptr);
	
}
