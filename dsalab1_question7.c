#include<stdio.h>
int main()
{
    int *p,*q,a,b;
    printf("Two numbers: ");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    printf("Sum= %d",*p+*q);
    return 0;
}