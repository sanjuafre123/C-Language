#include<stdio.h>
#include<string.h>

void main()
{
    char name1[50],name2[50];
    printf("Enter the string : ");
    gets(name1);
    int length=strlen(name1);
    int i;
    
    for(i=0; i<length; i++)
    {
        name2[i]=name1[i];
    }
    printf("Copied 1st string in 2nd string : ");
    puts(name2);
}
