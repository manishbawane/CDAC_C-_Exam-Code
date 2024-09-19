#include<iostream>
#include<fstream>
using namespace std;
class employee
{
	int empid;
	float salary;
	string name;
	public:
		void employee_data()
		{
		   cout<<"\nEnter the name of the employee";
		   cin>>name;
		   cout<<"\nEnter the salary of the employee";
		   cin>>salary;
		   cout<<"\nEnter the employee Id:";
		   cin>>empid;	
		}
		
		
		void getdata(string name,float salary,int empid)
		{
			this->name=name;
			this->salary=salary;
			this->empid=empid;
		}
		
		float getsalary()
		{
			return salary;
		}
		
};


int main()
{
	employee employess[10];
	string name;
	float salary;
	int empid;
	employee obj;
	obj.employee_data();
	obj.getdata("sachin",10000,123);
	obj.employee_data();
	obj.getdata("virat",10000,123);
	obj.employee_data();
	obj.getdata("rohit",10000,123);
	obj.employee_data();
	obj.getdata("rahul",10000,123);
	obj.employee_data();
	obj.getdata("ajinkya",10000,123);
	obj.employee_data();
	obj.getdata("raj",10000,123);
	obj.employee_data();
	obj.getdata("niya",10000,123);
	obj.employee_data();
	obj.getdata("mahesh",10000,123);
	obj.employee_data();
	obj.getdata("rakesh",10000,123);
	obj.employee_data();
	obj.getdata("lokesh",10000,123);
	
};