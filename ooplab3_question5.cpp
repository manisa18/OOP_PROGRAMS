/*5) WAP to swap two variables using pass by reference.*/
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
    cout<<"After swap a= "<<*a<<" b= "<<*b<<endl;
}
int main()
{
    int a, b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    cout<<"Before swap a="<<a<<" b="<<b<<endl;
    swap(&a,&b);
    return 0;
}