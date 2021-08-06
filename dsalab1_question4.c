#include<stdio.h>
void add(int x,int y)
{    printf("Sum= %d\n",x+y);
}
void sub(int x,int y)
{
    printf("Sub= %d\n",x-y);
}
void mul(int x,int y)
{
    printf("Multiply: %d\n",x*y);
}
void div(float x,float y)
{
    printf("Divide: %f\n",x/y);
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    add(x,y);
    sub(x,y);
    mul(x,y);
    div(x,y);
    return 0;
}