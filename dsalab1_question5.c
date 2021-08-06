#include<stdio.h>
int main()
{
    int a, *p;
    p = &a;
    scanf("%d",&a);
    printf("Value %d\n",*p);
    printf("Address: %d",p);
    return 0;
}