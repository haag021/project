#pragma once
#include <string>

using namespace std;

class Person
{
public:
  Person(string n, bool i);
  void introduce();
private:
  string name;
  bool isLame;
};
