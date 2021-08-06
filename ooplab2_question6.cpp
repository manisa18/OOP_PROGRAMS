#include<bits/stdc++.h>
using namespace std;
class employee{
	int store_id;
	char name[30];
	int age;
	float basic_salary;
	float gs;
	public:
		void input(){
			cout<<"Enter Store Id: "; 
				cin>>store_id;
			cout<<"Enter Name: ";
				cin>>name;
			cout<<"Enter  Age: ";
				cin>>age;
			cout<<"Enter Basic Salary: ";
				cin>>basic_salary;
				
			gross_salary();
			cout<<endl;
		}
		
		void gross_salary()
		{
			gs = basic_salary + (0.8*basic_salary)+(0.1*basic_salary);
		}
		
		void display()
		{
			cout<<store_id<<"\t\t"<<name<<"\t"<<age<<"\t"<<basic_salary<<"\t\t"<<gs<<endl;
		}
};
int main()
{
	int n;
	cout<<"Enter number of Employee: ";
	cin>>n;
	employee E1[n];
	
	for(int i=0;i<n;i++)
		E1[i].input();
	
	cout<<"Store_Id\tName\tAge\tBasic_Salary\tGross_Salary\n";
	for(int i=0;i<n;i++)
		E1[i].display();
	return 0;
}
