/*6)WAP to swap the data members in two objects, using pass by reference for objects*/
#include<bits/stdc++.h>
using namespace std;
class swap_1{
    int x;
    int y;
    public:
    void input()
    {
        cin>>x>>y;
    }
    void swapping(swap_1 *s)
    {
        swap_1 t;
        t.x = x;
        x = s->x;
        s->x =t.x;

        t.y = y;
        y = s->y;
        s->y =t.y;
        cout<<"After Swap:"<<endl;
        cout<<"Object1: a= "<<x<<"b= "<<y<<endl;
        cout<<"Object2: a= "<<s->x<<"b= "<<s->y;
    }
    void display()
    {
    	cout<<"Before Swap: "<<endl;
    	cout<<"a= "<<x<<" b= "<<y<<endl;
	}	
};
int main()
{
    swap_1 s1,s2;
    s1.input();
    s2.input();
    s1.display();
    s2.display();
    s1.swapping(&s2);
    return 0;
}
