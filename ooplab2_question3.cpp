#include<bits/stdc++.h>
using namespace std;
class student{
	char name[30];
	int roll;
	float marks[5];
	float sum;
	float percentage;
	public:
		void input()
		{
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Roll Number: ";
			cin>>roll;
			cout<<"Enter Marks\n";
			for(int i=0;i<5;i++)
			{
				cout<<"Mark"<<i+1<<": ";
				cin>>marks[i];
			}
			total_marks();
			percent();	
		}
		void total_marks()
		{
			sum =0;
			for(int i=0;i<5;i++)
				sum+=marks[i];
		}
		void percent()
		{
			percentage = (sum/500)*100;
		}
		void display()
		{
			cout<<"Name - "<<name<<endl;
			cout<<"Roll No. - "<<roll<<endl;
			cout<<"Total Marks - "<<sum<<endl;
			cout<<"Percentage - "<<percentage<<endl;
		}
};
int main()
{
	student S;
	S.input();
	S.display();
	return 0;
}
