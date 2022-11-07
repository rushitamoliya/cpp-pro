#include<iostream>
using namespace std;
class employee
	{
		public:
		int	emp_id;
		string emp_name;
		string emp_role;
		int emp_age;
		long emp_salary;
		int emp_experince;
		string emp_city;
		string emp_company_name;
	};
	int main()
	{
	int m;
employee i[50];
	cout<<"enter employee nu";
	cin>>m;

		for(int m=1;m<=2;m++){
		
			cout<<"enter employee id";
			cin>>i[m].emp_id;
			cout<<"enter emp name";
			cin>>i[m].emp_name;
			cout<<"Enter emp role";
			cin>>i[m].emp_role;
			cout<<"enter emp age";
			cin>>i[m].emp_age;
			cout<<" enter emp salary";
			cin>>i[m].emp_salary;
			cout<<"enter emp experince";
			cin>>i[m].emp_experince;
			cout<<"enter emp city";
			cin>>i[m].emp_city;
			cout<<"enter emp company name";
			cin>>i[m].emp_company_name;
			
			cout<<"emp details"<<endl;
			cout<<"id"<<i[m].emp_id<<endl<<"name:"<<i[m].emp_name<<endl<<"role:"<<i[m].emp_role<<endl<<"age:"<<i[m].emp_age<<endl<<"salary"<<i[m].emp_salary<<endl;
			cout<<"experience"<<i[m].emp_experince<<endl<<"city"<<i[m].emp_city<<endl<<"company name"<<i[m].emp_company_name<<endl;
			cout<<"enter emp information";
			cout<<endl;
			
	}
	
return 0;			
		}
		
		
		
