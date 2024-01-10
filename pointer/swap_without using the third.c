#include<stdio.h>
main()
{
	int a,b;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	
	*ptr1=*ptr1 * *ptr2;
	*ptr2=*ptr1 / *ptr2;
	*ptr1=*ptr1 / *ptr2;
	
	printf("swap value of a:%d\n",*ptr1);
	printf("swap value of b:%d",*ptr2);

	
	
}
