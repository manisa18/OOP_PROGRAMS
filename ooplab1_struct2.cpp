#include <stdio.h>
struct student{
	char name[50];
	int roll;
	float marks[5];
	float total_marks;
	float percentage;
};
void totalmarks(struct student *s1,int n)
{

		for(int j=0;j<n;j++)
		{	
			float sum=0;
			for(int i=0;i<5;i++)
				sum += s1[j].marks[i];
		
			s1[j].total_marks = sum;
	}
}		
void percentage(struct student *s1,int n)
{
	float percentage;
	
		for(int i=0;i<n;i++)
		{
			s1[i].percentage =(s1[i].total_marks/500)*100;	
		}	

}

void display_one(struct student *s1,int n)
{
	
	int roll_no;
	printf("Enter roll no:");
	scanf("%d",&roll_no);
	
	for(int i=0;i<n;i++)
	{
		if(roll_no == s1[i].roll)
		{
				printf("\nName: %s \nRoll Number: %d",s1[i].name,s1[i].roll);
					for(int j=0;j<5;j++)
					{
						printf("\nMark%d: %f",i+1,s1[i].marks[j]);
					}
				printf("\nPercentage: %f",s1[i].percentage);
		}
		
	}
 	printf("\n");
}


void display_two(struct student *s1,int n)
{
	
	int min,max;
	printf("Enter Min & Max:");
	scanf("%d%d",&min,&max);
	
	for(int i=0;i<n;i++)
	{
		if(s1[i].percentage>=min && s1[i].percentage<=max)
		{
				printf("\nName: %s \nRoll Number: %d",s1[i].name,s1[i].roll);
					for(int j=0;j<5;j++)
					{
						printf("\nMark%d: %f",i+1,s1[i].marks[j]);
					}
				printf("\nPercentage: %f",s1[i].percentage);
				printf("\n");
		}
		
	}
	printf("\n");
}

void sort(struct student *s1,int n)
{
	struct student temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<(n-1-i);j++)
		{
			if(s1[j].total_marks>s1[j+1].total_marks)
			{
				temp = s1[j];
				s1[j]=s1[j+1];
				s1[j+1]=temp;
			}
		}
	}
	
	printf("\nName \tRoll_No \tTotal_Marks\tpercentage \n");
	for(int i=0;i<n;i++)
	{
			printf("%s \t %d \t %f \t %f \n",s1[i].name,s1[i].roll,s1[i].total_marks,s1[i].percentage);
	}
	
}
int main()
{
	int n;
	printf("Enter no of students: ");
	scanf("%d", &n);
	struct student s1[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter the name of the student:");
			scanf("%s",&s1[i].name);
		printf("Enter the roll no of the student:");
				scanf("%d",&s1[i].roll);
		printf("Enter the marks of 5 subject: ");
				for(int j=0;j<5;j++)
				{
					printf("Mark%d: ",j+1);
					scanf("%f",&s1[i].marks[j]);
				}
		
	
		printf("\n");		
	}
	totalmarks(s1,n);
	percentage(s1,n);
	display_one(s1,n);
	display_two(s1,n);
	sort(s1,n);
	return 0;
}
