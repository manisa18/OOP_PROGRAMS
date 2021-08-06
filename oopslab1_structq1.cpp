#include <stdio.h>
struct student{
	char name[50];
	int roll;
	float marks[5];
};
int main()
{
	struct student s1;
	printf("Enter the name of the student:");
	scanf("%s",&s1.name);
	printf("Enter the roll no of the student:");
		scanf("%d",&s1.roll);
	printf("Enter the marks of 5 subject: ");
	
	for(int i=0;i<5;i++)
	{
		printf("Mark%d: ",i+1);
		scanf("%f",&s1.marks[i]);
	}
	
	printf("\nName: %s \nRoll Number: %d",s1.name,s1.roll);
	for(int i=0;i<5;i++)
	{
		printf("\nMark%d: %f",i+1,s1.marks[i]);
	}
	return 0;
}
