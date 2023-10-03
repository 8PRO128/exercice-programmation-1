#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

#include "../p1/Person.h"

class Employee {
public:
	Employee();
	Employee(string employee_name, double initial_salary);
	void set_salary(double new_salary);
	double get_salary() const;
	string get_name() const;

private:
	Person person_data;
	double salary;
};

#endif