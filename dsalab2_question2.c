#include<stdio.h>
#include<malloc.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    int *a;
    a=(int *)malloc(n*sizeof(int));
    int i;
    for( i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Element\tNGE\n");

    for(i=0;i<n;i++)
    {
        int max=-1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                max=a[j];
                break;
            }
        }
        printf("%d  %d\n",a[i],max);
    }
}