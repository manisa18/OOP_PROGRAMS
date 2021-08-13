#include<stdio.h>
#include<malloc.h>
struct dist{
    int km;
    int m;
};
void input(struct dist *d)
{
    printf("KM:");
    scanf("%d",&(d)->km);
    printf("M:");
    scanf("%d",&(d)->m);
}
int main()
{
    struct dist *d1,*d2,*d3;
    d1 = (struct dist*)malloc(sizeof(struct dist));
    d2 = (struct dist*)malloc(sizeof(struct dist));
    d3 = (struct dist*)malloc(sizeof(struct dist));
   
    input(d1);
    input(d2);
   
    d3->km=d1->km+d2->km;
    if(d1->m+d2->m>=1000)
    {
        d3->m = d1->m+d2->m -1000;
        d3->km++;
    }
    printf("%dkm %dm",d3->km,d3->m);
    return 0;
}