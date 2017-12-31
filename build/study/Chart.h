#ifndef CHART_H
#define CHART_H
#include "Person.h"
#include <iostream>
#include <vector>
#include <fstream>






class Chart
{
private:
	std::vector <Person> _chart;
	
public:
	bool run = true;
	void load();
	void add();
	void save();
	void quit();
	void print();
	void erase();
};



#endif