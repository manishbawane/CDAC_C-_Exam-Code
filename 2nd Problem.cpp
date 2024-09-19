/*write a program to access worker information worker_name,no_of_hours_worked,pay_rate and salary.
write a neccessary function to calculate to display the salary of worker. default pay_rate = 500rs/hr.*/
#include<iostream>

using namespace std;
class worker
{
  
  	private:
	int hrs;
	char name[20];
	int pay_rate=500;
	public:
		
	  void get(int hrs,float salary,char name, double rate)
        {
         	salary= hrs*rate;
        }
        
        void display
        {
        	cout<<"salary of"<<name<<"is ="<<salary;
		}
        

};

int main()
{
	
	int hrs,rate;
	float salary;
	char name[20];
	
	cout<<"\nEnter the name of employee: ";
	cin>>name;
	cout<<"\nEnter the no of hours worked: ";
	cin>>hrs;
	cout<<"\nEnter the payrate :";
	cin>>rate;
	salary= hrs*rate;
	cout<<"\salary of"<<name<<"is ="<<salary;
	return 0;
};