/*2)  WAP to find volume of a sphere, a cylinder and a cuboid, using function overloading.*/
#include<bits/stdc++.h>
#define pi 3.14
using namespace std;
class volume{
float ans;
float s;
public:
void vol(int radius)
{
    ans = (4*pi*pow(radius,3))/3;
    cout<<"Volume of Sphere: "<<ans<<endl;
}

void vol(int radius, int height)
{
    ans = (pi*pow(radius,2)*height);
    cout<<"Volume of Cylinder: "<<ans<<endl;
}

void vol(int length,int breadth,int height)
{
    ans = length*breadth*height;
    cout<<"Volume of Cuboid: "<<ans<<endl;
}
};
int main()
{
    volume sphere,cylinder,cuboid;
    sphere.vol(3);
    cuboid.vol(3,4,5);
    cylinder.vol(5,10);
    return 0;
}