#include<stdio.h>
struct employee{
    char name[30];
    char gender[0];
    char designation[30];
    char department[30];
    float bs;
    float gs;
};

int main(){
    int n;
    printf("Enter the no. of student: ");
    scanf("%d",&n);
    struct employee s[n];
    for(int i=0;i<n;i++)
    {
        printf("%d\n",i+1);
        printf("Enter Name:");
        scanf("%s",&s[i].name);
        printf("Enter Gender:");
        scanf("%s",&s[i].gender);
        printf("Enter Deisgnation:");
        scanf("%s",&s[i].designation);
        printf("Enter department:");
        scanf("%s",&s[i].department);
        printf("Enter Basic Salary:");
        scanf("%f",&s[i].bs);

        s[i].gs = s[i].bs + (0.25*s[i].bs) + (0.75*s[i].bs);
    }
        printf("Name\tGender\tDEsignation\tdepartment\tBasic_salary\tGross_salary\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t%s\t%s\t\t%s\t\t%f\t\t%f\n",s[i].name,s[i].gender,s[i].designation,s[i].department,s[i].bs,s[i].gs);
    }
    return 0;
}