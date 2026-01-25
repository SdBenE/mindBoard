#include <iostream>
#include <cmath>
#include "subject.h"
#include "relation.h"

void compareDims(std::vector<Subject> subjectSet) {
	for (int i = 0; i < subjectSet.size(); i++) {
		std::cout << "<compareDims> size of array " << (i + 1);
	}
}

double findDistance(Subject subjectP, Subject subjectQ) {
	if (subjectP.getDims() != subjectQ.getDims()) {
		std::cout << "<findDistance> Error! Dimensions for distance calculation are not equal" << std::endl;
		return NULL;
	}

	double determinant{};

	for (int i = 1; i <= subjectP.getDims(); i++) {
		determinant += (subjectP.getValueAtDim(i) - subjectQ.getValueAtDim(i));
	}
	
	return sqrt(determinant);
}