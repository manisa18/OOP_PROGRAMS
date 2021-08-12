#include<bits/stdc++.h>
#define pi 3.14
using namespace std;
class areas{
float area_ans;
float s;
public:
void area(int radius)
{
    area_ans = pi*pow(radius,2);
    cout<<"Area pf Circle: "<<area_ans<<endl;
}

void area(int length, int breadth)
{
     area_ans = length * breadth;
    cout<<"Area pf Rectangle: "<<area_ans<<endl;
}

void area(int side1,int side2,int side3)
{
   
    s = (side1 + side2 + side3)/2;
    area_ans = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    cout<<"Area pf Triangle: "<<area_ans<<endl;
}
};
int main()
{
    areas Triangle,Circle,Rectangle;
    Triangle.area(4,5,6);
    Circle.area(5);
    Rectangle.area(4,5);
    return 0;
}