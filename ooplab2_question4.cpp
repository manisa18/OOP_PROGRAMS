#include<bits/stdc++.h>
using namespace std;
class complexno
{
	int real;
	int img;
	public:
		void input()
		{
			cout<<"Enter Real: ";
			cin>>real;
			cout<<"Enter Imaginary: ";
			cin>>img;
			cout<<endl;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main()
{
	complexno s1[10];
	for(int i=0;i<10;i++)
		s1[i].input();
	
	cout<<"Complex No are:\n";
	for(int i=0;i<10;i++)
		s1[i].display();
		
	return 0;
}
