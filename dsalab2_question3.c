#include<stdio.h>
struct student{
    int roll;
    char name[30];
    char gender[0];
    int marks;
};

int main()
{
    int n;
    printf("Enter the no. of student: ");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("%d\n",i+1);
        printf("Enter Roll Number:");
        scanf("%d",&s[i].roll);
        printf("Enter Name:");
        scanf("%s",&s[i].name);
        printf("Enter Gender:");
        scanf("%s",&s[i].gender);
        printf("Enter Marks:");
        scanf("%d",&s[i].marks);
    }
    printf("Roll\tName\tGender\tMarks\n");
    for(int i=0;i<n;i++)
        printf("%d\t%s\t%s\t%d\n",s[i].roll,s[i].name,s[i].gender,s[i].marks);
    
    return 0;
}