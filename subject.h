#pragma once
#include <vector>
#include <string>

class Subject {
	private:
		std::string name{};
		std::vector<double> conceptPlot{};
		void checkDims(int currentDims);
		void plotInit(int dims);

	public:
		//Constructors
		Subject(int dimensions) { Subject::plotInit(dimensions); };
		Subject(std::vector<double> plotArg);
		//Name-inclusive constructors
		Subject(int dimensions, std::string subjectName);
		Subject(std::vector<double> plotArg, std::string subjectName);
		
		//Accessors
		std::string getName();
		int getDims();
		double getValueAtDim(int dim);
		std::vector<double> getPlot();
};