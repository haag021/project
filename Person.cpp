#include <Person.h>
#include <string>

Person::Person(string n, bool i)
{
  name = n;
  isLame = i;
};

void Person::introduce()
{
  cout << "My name is " << name << " and I am " <<
    isLame ? "lame." : "not lame." << endl;
};
