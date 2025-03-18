#pragma once
#include<string>

class Employee {
public:
	Employee(std::string, std::string, int);
	
	void setFirstName(std::string);
	std::string getFirstName()const;
	
	void setLastName(std::string);
	std::string getLastName()const;
	
	void setMonthlySalary(int);
	int getMonthlySalary()const;
private:
	std::string fName;
	std::string lName;
	int sal;

	const static int MIN_LENGTH = 2;  // Minimum valid length of first or last name
	const static int MIN_SALARY = 0;  // Minimum valid salary
};