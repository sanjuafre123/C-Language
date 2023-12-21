#include<stdio.h>
void cal()
{
	char op;
	printf("enter the value op :");
	scanf(" %c",&op);
	int a,b;
	printf("enter the value a :");
	scanf("%d",&a);
	printf("enter the value b :");
	scanf("%d",&b);
	
	switch(op)
	{
		case '+':printf("%d + %d = %d",a,b,a+b);
		break;
		case '-':printf("%d - %d = %d",a,b,a-b);
		break;
		case '*':printf("%d * %d = %d",a,b,a*b);
		break;
		case '/':printf("%d / %d = %d",a,b,a/b);
		break;
	}printf("\n");
}
main()
{
	while(1)
	{
		cal();
	}
}
