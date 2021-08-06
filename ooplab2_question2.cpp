#include<iostream>
using namespace std;
class student{
	char name[30];
	int roll;
	float marks;
	public:
		void input()
		{
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Roll Number: ";
			cin>>roll;
			cout<<"Enter Total Marks: ";
			cin>>marks;
		}
		void display()
		{
			cout<<"Name\tRoll_No.\tTotal_Marks\n";
			cout<<name<<"\t"<<roll<<"\t\t"<<marks<<endl;
		}
};
int main()
{
	student S;
	S.input();
	S.display();
	return 0;
}
