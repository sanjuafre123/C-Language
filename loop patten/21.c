#include<stdio.h>
main()
{
	//1
	//1 2
	//1 2 3
	//1 2 3 4
	//1 2 3 4 5
	
	char i,j;
	for(i='A'; i<='E'; i++)
	{
		for(j='A'; j<=i; j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
