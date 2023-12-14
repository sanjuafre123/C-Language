//1. Write a c program to count frequency of each charcters in a string.
#include<stdio.h>
#include<string.h>

main()
{
	char name[50];
	printf("Enter your name : ");
	gets(name);
	int freq=1;
	int i,j;
	int length=strlen(name);
	
	for(i=0; i<length; i++)
    {
        freq=1;
        for (j=i+1; j<length; j++) 
        {
            if (name[i]==name[j]) 
            {
                freq++;
            }
        }
        if(name[i]!=-1) 
        {
            printf("%c --> %d times repeed\n",name[i],freq);
        }
    }
	
}
