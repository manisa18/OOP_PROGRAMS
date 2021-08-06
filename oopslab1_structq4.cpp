#include <stdio.h>
#include<string.h>
struct book{
	char title[50];
	char author[50];
	float price;
};

void input(struct book *b1,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the title:");
	        scanf("%s",&b1[i].title);
	    printf("Enter the author:");
		    scanf("%s",&b1[i].author);
	    printf("Enter the price: ");
            scanf("%f",&b1[i].price);
        printf("\n");
    }
}

void display(struct book *b1, int n)
{
    char given_author[50];
    printf("Enter a author name: ");
    scanf("%s",&given_author);

    for(int i=0;i<n;i++)
    {
        if(strcmpi(given_author,b1[i].author)==0)
        {
            printf("Title: %s \n Author: %s\n Price: %f \n", b1[i].title,b1[i].author,b1[i].price);
        }
    }

}
int main()
{
	int n;
    printf("Enter n: ");
    scanf("%d",&n);
    struct book b1[n];
   
    input(b1,n) ;

    display(b1,n);	
	return 0;
}
