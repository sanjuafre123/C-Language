#include<stdio.h>
main()
{
	int basesalary,hra,da,ta,totalsalary;
	printf("enter the your salary :");
	scanf("%d",& basesalary);
	
	hra=basesalary*10/100;
	da=basesalary*5/100;  
	ta=basesalary*8/100;
	
	totalsalary=basesalary+hra+da+ta;
	
	printf("%d",totalsalary);
	
}
