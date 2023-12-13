//WAP to given string in reverse.
#include<stdio.h>
#include<string.h>
main()
{

	
	char t[50];
	printf("enter the value of :");
	gets(t);
	int i,lenght=strlen(t);

	if(t[0]>=97 && t[0]<=122)
	{
		t[0]=t[0] - 32;
	}
	for(i=1; i<=lenght; i++)
	{
		if(t[i-1]==' ')
		{
			if(t[i]>=97 && t[i]<=122)
			{
				t[i] = t[i] - 32;	
			}	
		}
		else if(t[i]>65 && t[i]<90)
		{
			t[i] = t[i] + 32;
		}
		else if(t[i]==' ')
		{
			if(t[i]>=97 && t[i]<=122)
			{
				t[i+1] = t[i+1] - 32;	
			}	
		}
		
	}
	puts(t);
}
	
	
	

