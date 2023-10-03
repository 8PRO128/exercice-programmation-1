#include <iostream>
using namespace std;

#include "Employee.h"

Employee::Employee()
{
}

Employee::Employee(string employee_name, double initial_salary)
{
  person_data = Person(employee_name, 0);
  salary = initial_salary;
}

void Employee::set_salary(double new_salary)
{
  salary = new_salary;
}

double Employee::get_salary() const
{
  return salary;
}

string Employee::get_name() const
{
  return person_data.get_name();
}
