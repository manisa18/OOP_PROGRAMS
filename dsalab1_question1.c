#include<stdio.h>
int prime(int no)
{
    if(no==1 || no==0)
        return 0;
    int i;
    for(i=2;i<no/2;i++)
    {
        if(no%i==0)
        {   
            return 0;
        }
        
    }
    return 1;
}
int main()
{
    int no;
    scanf("%d",&no);
    if(prime(no)==1)
        printf("It is a prime number.");
    else
        printf("It is not a prime number.");
    return 0;
}