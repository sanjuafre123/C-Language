#include<stdio.h>
main()
{
//1
//2 1
//3 2 1
//4 3 2 1
//5 4 3 2 1
	char i,j,k;
	
	for(i='A'; i<='E'; i++)
	{
		for(k=i; k<'E'; k++)
		{
			printf(" ");
		}
		for(j=i; j>='A'; j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	
}
