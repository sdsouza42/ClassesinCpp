#include<iostream>
#include"Employee.h"


using namespace std;

Employee::Employee(string f, string l, int ms)
	:fName(f), lName(l), sal(ms)
{
	if (f.length() < MIN_LENGTH)
	{
		cerr << "\nWarning - invalid length string entered for first name in ctor: " << f;
		cerr << "\nThe string that was entered will be used for now." << endl;
	}

	if (l.length() < MIN_LENGTH)
	{
		cerr << "\nWarning - invalid length string entered for last name in ctor: " << l;
		cerr << "\nThe string that was entered will be used for now." << endl;
	}

	if (ms < MIN_SALARY)
	{
		cerr << "\nInvalid salary amount specified in ctor: $" << ms;
		cerr << "\nSalary set to $" << MIN_SALARY << " instead." << endl;
		this->sal = MIN_SALARY;
	}
}
void Employee::setFirstName(string name)
{
	if (name.length() >= MIN_LENGTH)
	{
		fName = name;
	}
	else
	{
		cerr << "\nERROR - invalid length string entered for first name in setFirstName(): " << name;
		cerr << "\nThe first name was left unchanged: " << fName << endl;
	}
}
string Employee::getFirstName()const
{
	return fName;
}
void Employee::setLastName(string name)
{
	if (name.length() >= MIN_LENGTH)
	{
		lName = name;
	}
	else
	{
		cerr << "\nERROR - invalid length string entered for last name in setLastName(): " << name;
		cerr << "\nThe last name was left unchanged: " << lName << endl;
	}
}
string Employee::getLastName()const
{
	return lName;
}
void Employee::setMonthlySalary(int salary)
{
	if (salary >= MIN_SALARY) // if salary is positive or zero
	{
		sal = salary; // set monthlySalary to salary
	}
	else
	{
		cerr << "\nERROR - Invalid salary amount specified: $" << salary;
		cerr << "\nSalary was left unchanged at: $" << sal << endl;
	}
}
int Employee::getMonthlySalary()const
{
	return sal;
}