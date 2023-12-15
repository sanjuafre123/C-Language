//2. Write a c program to check whether a string is	palindrom or not.
#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	printf("Enter the name : ");
	gets(a);
	int i,l,check=0;
	l= strlen(a);
	int x= l-1;
	
	
	for(i=0; i<l; i++)
	{
		if(a[i]!=a[x])
		{
			check=1;
		}
		x--;
	}
	if(check==1)
	{
		printf("not palindrom");
	}
	else
	{
		printf("palindrom");
	}
	
}
