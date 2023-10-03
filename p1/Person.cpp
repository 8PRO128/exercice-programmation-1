#include <iostream>
using namespace std;

#include "Person.h" 

Person::Person()
{

}

Person::Person(string name, int age)
{
  this->name = name;
  this->age = age;
}

string Person::get_name() const
{
  return name;
}

int Person::get_age() const
{
  return age;
}
