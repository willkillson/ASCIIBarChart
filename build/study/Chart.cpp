#include "Chart.h"


void Chart::load()
{
	std::ifstream input;
	std::string inputparse;

	std::cout << "Please enter the name of the file" << std::endl;
	std::cin >> inputparse;
	inputparse.append(".txt");
	input.open(inputparse);
	if (!input.good())
	{
		return;
	}

	int val = 0;
	std::string name;
	while (1)
	{

		input >> name;
		input >> val;
		if ((input.eof()))
		{
			break;
		}
		Person person(name, val);
		this->_chart.push_back(person);

	}
}

void Chart::add()
{
	std::string name;
	int value;
	std::cout << "Please enter a name: ";
	std::cin >> name;
	std::cout << std::endl;
	std::cout << "Please enter a value: ";
	std::cin >> value;

	Person person(name, value);
	this->_chart.push_back(person);

	std::cout << std::endl;

}

void Chart::save()
{
	std::ofstream output;
	std::string parse;

	std::cout << "Please enter the name of the file (don't end with a file extension)" << std::endl;
	std::cin >> parse;
	parse.append(".txt");
	output.open(parse);


	for (auto itb = this->_chart.begin(); itb != _chart.end(); itb++)
	{
		output << itb->getName();
		output << " ";
		output << itb->getValue();
		output << '\n';
	}
	output.close();
}

void Chart::quit()
{
	this->run = false;
}

void Chart::print()

{

	auto itb = this->_chart.begin();
	auto ite = this->_chart.end();

	std::cout << "Beautiful Chart Bitches!" << std::endl;
	std::cout << "__________________________" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


	std::string pad;
	while (itb != ite)
	{

		pad = itb->getName();//pad string
		for (int i = pad.size() - 1; i < 10; i++)
		{
			pad.append(" ");
		}
		std::cout << pad;
		std::cout << "|";
		for (int i = 0; i < itb->getValue(); i++)
		{
			std::cout << "=";
		}


		std::cout << std::endl;

		itb++;
	}
}

void Chart::erase()
{
	while(_chart.size()>0)
	{
		this->_chart.erase(_chart.begin());
	}
}
