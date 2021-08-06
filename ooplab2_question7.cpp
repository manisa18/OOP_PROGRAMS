#include<bits/stdc++.h>
using namespace std;
class coordinate{
	float x;
	float y;
	float distance;
	public:
		void input()
		{
			cout<<"Enter X & "<<"Y :";
			cin>>x>>y;
		}
		void calculate(coordinate C){
			distance = sqrt(pow((C.x-x),2)+pow((C.y-y),2));
		}
		void display(coordinate C)
		{
			cout<<"X1: "<<x<<" Y1: "<<y<<endl;
			cout<<"X2: "<<C.x<<" Y2: "<<C.y<<endl;
			cout<<"Distance: "<<distance;
		}
		
};
int main()
{
	coordinate c1,c2;
	c1.input();
	c2.input();
	c1.calculate(c2);
	c1.display(c2);
	return 0;
}
