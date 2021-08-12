/*4) WAP to find square and cube of a number using inline function.*/
#include<bits/stdc++.h>
using namespace std;
class power{
    public:
    inline int square(int n)
    {
        return n*n;
    }
    inline int cube(int n)
    {
        return n*n*n;
    }
};
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    power p;
    cout<<"Square of "<<n<<" is "<<p.square(n)<<endl;
    cout<<"Cube of "<<n<<" is "<<p.cube(n)<<endl;
    return 0;
}
