#include<stdio.h>
#include<string.h>

struct Student 
{
	int stu_id , stu_age , stu_standard;
	char stu_name[50];
	char stu_course[50];
	char stu_city[50];
	char stu_school[50];
};
main()
{
	char stu_name[50];
	char stu_course[50];
	char stu_city[50];
	char stu_school[50];
	
	struct Student student[3];
	int i;
	for(i=0; i<3; i++)
	{
		printf("Student %d info :\n\n",i+1);
		printf("enter id :");
		scanf("%d",&student[i].stu_id);
		
		printf("enter name:");
		scanf("%s",&student[i].stu_name);
		strcpy(stu_name,stu_name);
		
		printf("enter the age:");
		scanf("%d",&student[i].stu_age);
		
		printf("enter the standerd:");
		scanf("%d",&student[i].stu_standard);
		
		printf("enter the course:");
		scanf("%s",&student[i].stu_course);
		strcpy(stu_course,stu_course);
		
		printf("enter the city:");
		scanf("%s",&student[i].stu_city);
		strcpy(stu_city,stu_city);
		
		printf("enter the school:");
		scanf("%s",&student[i].stu_school);
		strcpy(stu_school,stu_school);
		printf("\n\n");
	}
	for(i=0; i<3; i++)
	{
		printf("id :%d\n",student[i].stu_id);
		printf("id :%s\n",student[i].stu_name);
		printf("id :%d\n",student[i].stu_age);
		printf("id :%d\n",student[i].stu_standard);
		printf("id :%s\n",student[i].stu_course);
		printf("id :%s\n",student[i].stu_city);
		printf("id :%s\n",student[i].stu_school);
		
		printf("\n\n");
	}
}
