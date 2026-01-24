#pragma once
#include <vector>

class Subject {
	private:
		std::vector<double> conceptPlot{};
		void checkDims(int currentDims);
		void plotInit(int dims);
	public:
		Subject(int dimensions) { Subject::plotInit(dimensions); };
		std::vector<double> getPlot();
		int getDims();
};