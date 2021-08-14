#include<stdio.h>
#include<malloc.h>
int main()
{
    int* arr;
    int n,max=0,count=0;
    printf("Enter No. of elements");
    scanf("%d",&n);

    arr= (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    { 
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {    
            max = arr[i];
            count=0;
        }
        if(arr[i]==max)
            count++;
    }
    
    printf("Largest Number %d \n",max);
    printf("No of occurence %d \n",count);
    return 0;
}