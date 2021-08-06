#include<stdio.h>
int main()
{
    int *a1;
    float *a2;
    double *a3;
    long *a4;

    printf("Size of int %d\n",sizeof(*a1));
    printf("Size of float %d\n",sizeof(*a2));
    printf("Size of double %d\n",sizeof(*a3));
    printf("Size of long %d\n",sizeof(*a4));
}