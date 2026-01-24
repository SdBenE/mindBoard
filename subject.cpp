#include <iostream>
#include "subject.h"

void Subject::plotInit(int dims) {
	this->conceptPlot.resize(dims);
	std::cout << this->conceptPlot.size() << std::endl; //TODO: Remove before use

	double input;

	std::cout << "<plotInit> Enter the number between -1 and 1 for the plotting in the given dimensions:" << std::endl;
	for (int i = 0; i < dims; i++) {
		do {
			std::cout << "<plotInit> Dimension " << (i + 1) << " ";
			std::cin >> input;
		} while (input < -1 or input > 1);

		std::cout << "<plotInit> Dimension " << (i + 1) << " input accepted." << std::endl;

		this->conceptPlot.at(i) = input;
	}
}

std::vector<double> Subject::getPlot() {
	return this->conceptPlot;
}

int Subject::getDims() {
	return this->conceptPlot.size();
}

void Subject::checkDims(int currentDims) {
	std::cout << "<checkDims> The current global dimension level of the program : " << currentDims << std::endl;
	std::cout << "<checkDims> This subject has dimension level : " << this->conceptPlot.size() << std::endl;
}
