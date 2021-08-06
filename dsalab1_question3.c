#include<stdio.h>

int gcd(int x,int y)
{
    if(x==0)
        return y;

    return gcd( y % x , x );
}
void lcm(int x,int y)
{
    int ans = ((x*y) / gcd(x,y)) ;
    printf("%d",ans);
}
int main()
{
    int x,y;
    printf("X & Y: ");
    scanf("%d%d",&x,&y);
    lcm(x,y);
    return 0;
}