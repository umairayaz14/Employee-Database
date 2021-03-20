#include<iostream>
using namespace::std;

class Date
{
	int day;
	int month;
	int year;
	
public:
	
Date()
   {
   cout<<"Enter day of birth: ";
   cin>>day;
   cout<<"Enter month of birth: ";
   cin>>month;
   cout<<"Enter year of birth: ";
   cin>>year;
   
   }	
   void display()
   {
		cout<<"Date of birth is: "<<day<<"/"<<month<<"/"<<year<<endl;
   }
   };

class Company
{
   string companyname;
   int companyphonenumber;
   string companytype;	
   static int totalemployeese;
   static int totalemployeest;
   static int totalemployeesb;
   
public:
   	
Company()
	{
		cout<<"Enter company name: ";
		cin>>companyname;
		cout<<"Enter company phone number: ";
		cin>>companyphonenumber;
		cout<<"Enter company type [educational/travelling/business/etc: ";
		cin>>companytype;
		if (companytype == "educational")
		totalemployeese++;
		if (companytype == "travelling")
		totalemployeest++;
		if (companytype == "business")
		totalemployeesb++;
	
	}
	
	void display()
	{
		cout<<"Company name is: "<<companyname<<endl;
		cout<<"Company phone number is: "<<companyphonenumber<<endl;
		cout<<"Company type is: "<<companytype<<endl;
		cout<<"Number of employees in educational company are: "<<totalemployeese<<endl;
		cout<<"Number of employees in travelling company are: "<<totalemployeest<<endl;
		cout<<"Number of employees in business company are: "<<totalemployeesb<<endl;
	}
	
};

int Company::totalemployeese = 0;
int Company::totalemployeest = 0;
int Company::totalemployeesb = 0;

class Employee
{
   int employeeID;
   string name;
   string gender;
   int age;
	
public:

Employee()
{
	cout<<"Enter employee ID: ";
	cin>>employeeID;
	cout<<"Enter employee name: ";
	cin>>name;
	cout<<"Enter employee gender: ";
	cin>>gender;
	cout<<"Enter employee age: ";
	cin>>age;

	Company company;
    Date dateofbirth;
    cout<<endl;
    cout<<"Employee ID is: "<<employeeID<<endl;
	cout<<"Employee name is: "<<name<<endl;
	cout<<"Employee gender is: "<<gender<<endl;
	cout<<"Employee age is: "<<age<<endl;
    company.display();
    cout<<endl;
    dateofbirth.display();
    cout<<endl;
    
}
};


int main()
{
    int nemployees;
    cout<<"Enter number of employees you want to hire: ";
    cin>>nemployees;
    cout<<endl;
    Employee e[nemployees];

	//An instance of class Employee e has been created which will automatically call the constructor of Employee class. 
	//After entering details of employee, an instance of class Company is created in constructor of Employee which will automatically call constructor of Company. 
	//An instance of class Date is also created in constructor of Employee which will automatically call constructor of Date.
	//Two display functions have been created for Comapny and Date class which will be used to display values ont the console. 

}
