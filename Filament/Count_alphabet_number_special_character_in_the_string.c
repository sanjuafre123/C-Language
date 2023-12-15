#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char name[50];
    printf("Enter the string : ");
    gets(name);
    int length=strlen(name);
    int i;
    int alpha,num,sp;
    
    for(i=0; i<length; i++)
    {
        if(name[i]>=65 && name[i]<=90 || name[i]>=97 && name[i]<=122)
        {
            alpha++;
        }
        else if(name[i]>=48 && name[i]<=57)
        {
            num++;
        }
        else if(name[i]>=33 && name[i]<=47 || name[i]>=58 && name[i]<=64)
        {
            sp++;
        }
    }
    printf("\nAlphabet is: %d \n\nNumber is : %d \n\nSpecial character is : %d",alpha,num,sp);
}
