
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{
public:
  Person();
  Person(string name, int age);
  string get_name() const;
  int get_age() const; 

private:
  string name;
  int age; /* 0 si inconnu */
};

#endif