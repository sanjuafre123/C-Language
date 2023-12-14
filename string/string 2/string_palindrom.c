//2. Write a c program to check whether a string is	palindrom or not.
#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	printf("Enter the name : ");
	gets(a);
	int i,lenght,check=0;
	lenght= strlen(a);
	lenght = lenght-1;	
	
	for(i=0; i<lenght; i++)
	{
		if(a[lenght] != a[check])
		{
			check = 1;
	}
	}
	if(check == 0)
	{
		printf("name is palindrom.");
	}
	else
	{
		printf("name is Not palimdrom.");
	}
	check=0;
}
