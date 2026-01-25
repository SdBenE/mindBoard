#pragma once
#include <vector>

class Subject {
	private:
		std::vector<double> conceptPlot{};
		void checkDims(int currentDims);
		void plotInit(int dims);
		std::vector<double> getPlot();
	public:
		Subject(int dimensions) { Subject::plotInit(dimensions); };
		int getDims();
		double getValueAtDim(int dim);
};