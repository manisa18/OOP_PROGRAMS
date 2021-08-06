#include<stdio.h>
#include<math.h>
void power(int x,int y)
{
    int ans=1;
    for(int i=0;i<y;i++)
        ans*=x;
    printf("%d",ans);
}
int main()
{
    int x,y;
    printf("X,Y: ");
    scanf("%d%d",&x,&y);
    printf("Answer: ");
    power(x,y);
    return 0;
}