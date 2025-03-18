#include <iostream>
#include "Employee.h" // include definition of class Employee

using namespace std;

// function main begins program execution
int main()
{
   // create two Employee objects
   Employee employee1( "Lisa", "Roberts", 4500 );
   Employee employee2( "Mark", "Stein", 4000 );

   // display each Employee's yearly salary
   cout << "Employees' yearly salaries: " << endl;

   // retrieve and display employee1's monthly salary multiplied by 12
   int monthlySalary1 = employee1.getMonthlySalary();
   cout << employee1.getFirstName() << " " << employee1.getLastName() 
      << ": $" << monthlySalary1 * 12 << endl;

   // retrieve and display employee2's monthly salary multiplied by 12
   int monthlySalary2 = employee2.getMonthlySalary();
   cout << employee2.getFirstName() << " " << employee2.getLastName() 
      << ": $" << monthlySalary2 * 12 << endl;

   // give each Employee a 10% raise
   employee1.setMonthlySalary( static_cast<int>(monthlySalary1 * 1.1 )); // note that static_cast is preferred over C style cast
   employee2.setMonthlySalary( static_cast<int>(monthlySalary2 * 1.1 )); // note that static_cast is preferred over C style cast

   // display each Employee's yearly salary again
   cout << "\nEmployees' yearly salaries after 10% raise: " << endl;

   // retrieve and display employee1's monthly salary multiplied by 12
   monthlySalary1 = employee1.getMonthlySalary();
   cout << employee1.getFirstName() << " " << employee1.getLastName() 
      << ": $" << monthlySalary1 * 12 << endl;
   
   monthlySalary2 = employee2.getMonthlySalary();
   cout << employee2.getFirstName() << " " << employee2.getLastName() 
      << ": $" << monthlySalary2 * 12 << endl;

   // Some more test cases

   employee1.setMonthlySalary(0);
   cout << "\nMonthly salary is: $" << employee1.getMonthlySalary() << endl;

   employee2.setMonthlySalary(-1);
   cout << "\nMonthly salary is: $" << employee2.getMonthlySalary() << endl;

   employee1.setFirstName("R");
   cout << "The first name is: " << employee1.getFirstName() << endl;

   employee1.setLastName("PL");
   cout << "The last name is: " << employee1.getLastName() << endl;


   // Create some extra Employee objects to test ctor a bit more
   cout << "\n\nCreating employee3:";
   Employee employee3("", "ZZ", 0);
   cout << "\nThe first name is: " << employee3.getFirstName() << endl;
   cout << "The last name is: " << employee3.getLastName() << endl;
   cout << "Monthly salary is: $" << employee3.getMonthlySalary() << endl;

   cout << "\n\nCreating employee4:";
   Employee employee4("MM", "B", -1);
   cout << "\nThe first name is: " << employee4.getFirstName() << endl;
   cout << "The last name is: " << employee4.getLastName() << endl;
   cout << "Monthly salary is: $" << employee4.getMonthlySalary() << endl;

   cout << "\n";

   system("pause");
} // end main