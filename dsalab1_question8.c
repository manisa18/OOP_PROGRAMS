#include<stdio.h>
void swap_fun(int *p, int *q)
{
    int k;
    k = *p;
    *p = *q;
    *q = k;
    printf("After Swap a=%d b=%d",*p,*q);
}
int main()
{
    int a,b;
    printf("Two Number: ");
    scanf("%d%d",&a,&b);
    printf("Before Swap a= %d b=%d\n",a,b);
    swap_fun(&a,&b);
    return 0;
}