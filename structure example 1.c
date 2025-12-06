#include<stdio.h>
struct student
{
	char name[20];
	int marks;
	int age;
};

int main()
{
	struct student s[6];
	int i;
	printf("enter details of 5 students:\n");
	for(i=1;i<6;i++){
		printf("name of student:\n");
		scanf("%s",&s[i].name);
		
		printf("enter mark of student:\n");
		scanf("%d",&s[i].marks);
		
		printf("enter age of the student:\n");
		scanf("%d",&s[i].age);
		
	}
	printf("the student details are:\n");
	for(i=1;i<6;i++){
		printf("name: %s\n",s[i].name);
		printf("marks:%d\n",s[i].marks);
		printf("age:%d\n",s[i].age);
		
	}
	       return 0;
}
