#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

class Person {
private:
	std::string _name;
	int _value;
public:
	Person::Person(std::string name, int val);
	void setValue(int x) { this->_value = x; }
	void setName(std::string x) { this->_name = x; }
	int getValue() { return this->_value; }
	std::string getName() { return this->_name; }
};

#endif