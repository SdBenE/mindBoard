#pragma once
#include <vector>
#include <string>

class Subject {
	private:
		std::string name{};
		std::vector<double> conceptPlot{};
		void checkDims(int currentDims);
		void plotInit(int dims);
		std::vector<double> getPlot();
	public:
		Subject(int dimensions) { Subject::plotInit(dimensions); };
		std::string getName();
		int getDims();
		double getValueAtDim(int dim);
};