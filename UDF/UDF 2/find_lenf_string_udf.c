#include<stdio.h>
#include<string.h>
int length(char a[])
{
	int len;
	len = strlen(a);
	return len;
}

main()
{
 	char a[50];
 	printf("Enter the string : ");
 	gets(a);
 	printf("\nlength string is : %d",length(a));
 	
}
