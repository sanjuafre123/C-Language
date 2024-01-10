#include<stdio.h>
main()
{
	int a,b;
	printf("enter the value of A :");
	scanf("%d",&a);
	printf("enter the value of B :");
	scanf("%d",&b);
	
	int *ptr1=&a;
	int *ptr2=&b;
	int *ptr3;
	
	ptr3=ptr1;
	ptr1=ptr2;
	ptr2=ptr3;
	
	printf("swap value A :%d\n",*ptr1);
	printf("swap value B :%d",*ptr2);
	
	
}
