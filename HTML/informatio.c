#include<stdio.h>
#include<string.h>
main()
{
	FILE *FP;
	FP = fopen("Inforamation.html","w");
	char Name[20],course[20],skill[20],hobby[20],gender[20];
	int age;
	
	printf("Enter The Name :");
	gets(Name);
	
	printf("Enter The Gender :");
	gets(gender);
	
	printf("Enter The Course :");
	gets(course);
	
	printf("Enter The Hobby :");
	gets(hobby);
	
	printf("Enter The Age :");
	scanf("%d",&age);
	
	printf("%s\n",Name);
	printf("%s\n",gender);
	printf("%s\n",course);
	printf("%s\n",hobby);
	printf("%d\n",age);
	
	fprintf(FP,"<h1>Name Is :%s<h1>\n",Name);
	fprintf(FP,"<h2>Name Is :%d<h2>\n",age);
	fprintf(FP,"<h3>Name Is :%s<h3>\n",gender);
	fprintf(FP,"<h4>Name Is :%s<h4>\n",course);
	fprintf(FP,"<h5>Name Is :%s<h5>\n",hobby);
	
	
		
}
