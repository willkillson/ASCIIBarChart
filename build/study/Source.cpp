#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

#include "Chart.h"


int main() {
	char response;
	Chart chart;

	while (chart.run == true) {
		std::cout << "(l)oad (s)ave (a)dd (q)uit or (p)rint (d)elete " << std::endl;
		std::cin >> response;
		switch (response) {
		case 'l':
			chart.load();
			break;
		case 's':
			chart.save();
			break;
		case 'a':
			chart.add();
			break;
		case 'q':
			chart.quit();
			break;
		case 'p':
			chart.print();
			break;
		case 'd':
			chart.erase();
			break;
		}


	}

}