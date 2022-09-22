#include <windows.h>
#include <iostream>

using namespace std;

class employee
{
	int   emp_number;
	char  emp_name[20];
	char emp_dept_name[20];
	char emp_designation[20];
	public:

		void get_emp_details();
		void show_emp_details();
};

void employee :: get_emp_details()
{
	cout<<"\nEnter employee number: ";
	cin>>emp_number;
	cout<<"\nEnter employee name: ";
	cin>>emp_name;
	cout<<"\nEnter employee dept name: ";
	cin>>emp_dept_name;
	cout<<"\nEnter employee designation: ";
	cin>>emp_designation;
}
void employee :: show_emp_details()
{
	cout<<"\n\n**** Details of  Employee ****";
	cout<<"\nEmployee number       :  "<<emp_number;
	cout<<"\nEmployee Name         :  "<<emp_name;
	cout<<"\nEmployee dept name    :  "<<emp_dept_name;
	cout<<"\nEmployee designation  :  "<<emp_designation;
	cout<<"\n-------------------------------\n\n";
}


int main()
{
    employee emp;
    
    emp.get_emp_details();
    emp.show_emp_details();

    return 0;
}
