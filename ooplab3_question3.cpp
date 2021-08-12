/*3) WAP which displays a given character, n number of times, using a function. When the n
value is not provided, it should print the given character 80 times. When both the
character and n value is not provided, it should print ‘*’ character 80 times. 
[Write the above program in two ways:-
-using function overloading. -using default arguments.]*/
#include<bits/stdc++.h>
using namespace std;
//default arguments function
void disp(char a='*',int n=80){
    for(int i=0;i<n;i++){
        cout<<a<<" ";
    }
    cout<<endl;
}
//function overloading function
void display(char a)
{
    for(int i=0;i<80;i++)
    {
        cout<<a<<" ";
    }
}
void display(int n, char a)
{
    for(int i=0;i<n;i++)
    {
        cout<<a<<" ";
    }
}
void display()
{
    for(int i=0;i<80;i++)
    {
        cout<<"* ";
    }
}
int main()
{
    char a;
    int n;
    cout<<"Enter a character: ";
    cin>>a;
    cout<<"Enter number of times: ";
    cin>>n;
    //default arguments
    disp(a);
    cout<<endl;
    disp(a,n);
    cout<<endl;
    //function overloading
     display(n,a);
     cout<<endl;
     display(a);
     cout<<endl;
     display();
    return 0;
}
