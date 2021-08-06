#include <stdio.h>
#include<malloc.h>
struct student{
	long id;
	char name[50];
	int age;
	int basic_salary;
	float gross_salary;
};

float gross_calculate(int bs)
{
	return(bs +(0.08*bs)+(0.1*bs));
}

void display(struct student *s1,int n){
	printf("id \t name \t age \t basic_salary \t gross_salary \n");
	
	for(int i=0;i<n;i++)
	{
		printf("%ld \t %s \t %d \t %d \t \t %f \n",s1[i].id,s1[i].name,s1[i].age,s1[i].basic_salary,s1[i].gross_salary);
		
	}
}
int main()
{
	int n;
	printf("Enter the no. of employees: ");
	scanf("%d",&n);
	struct student *s1;
	s1 = (struct student*)malloc(n*sizeof(struct student));
	for(int i=0;i<n;i++)
	{
		printf("Enter id: ");
		scanf( "%ld",&(s1+i)->id);
		
		printf("Enter name: ");
		scanf( "%s",&(s1+i)->name);
		
		printf("Enter age: ");
		scanf( "%d",&(s1+i)->age);
		
		printf("Enter Basic Salary: ");
		scanf( "%d",&(s1+i)->basic_salary);
		
		(s1+i)->gross_salary = gross_calculate((s1+i)->basic_salary);
		printf("\n");
	}
	
	display(s1,n);
	return 0;
}
