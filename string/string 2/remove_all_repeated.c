//4. Write a c program to remove all repeated charcters in a string.
#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	int i=0,j,lenght,k;
	
	printf("Enter the string : ");
	gets(a);
    
	lenght = strlen(a);
	
	for(i=0; i<lenght; i++)
	{
		for(j=i+1; j<lenght; j++)
		{
			if(a[i] == a[j])
			{
				for(k=j; k<lenght; k++)
				{
					a[k] = a[k+1];
				}
			}
		}
	}
	printf("\nremove all repeed char:\n%s",a);
}
