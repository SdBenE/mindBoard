#pragma once
#include "subject.h"
class Symptom : public Subject {
	//Constructors
	Symptom(int dimensions) : Subject(dimensions) {};
	Symptom(std::vector<double> plotArg) : Subject(plotArg) {};
	//Name inclusive constructors
	Symptom(int dimensions, std::string symptomName) : Subject(dimensions, symptomName) {};
	Symptom(std::vector<double> plotArg, std::string symptomName) : Subject(plotArg, symptomName) {};
};