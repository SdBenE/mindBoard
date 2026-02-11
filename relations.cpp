#include <iostream>
#include <cmath>
#include "subject.h"
#include "relations.h"

void compareDims(std::vector<Subject> subjectSet) {
	for (int i = 0; i < subjectSet.size(); i++) {
		std::cout << "<compareDims> size of array " << (i + 1);
	}
}

double findDistance(Subject subjectP, Subject subjectQ) {
	if (subjectP.getDims() != subjectQ.getDims()) {
		//std::cout << "<findDistance> Dimensions for distance calculation are not equal" << std::endl;
		throw std::invalid_argument("<findDistance> Dimensions for distance calculation are not equal");
		//return NULL; // This will never happen due to throwing above
	}

	double determinant{};

	for (int i = 1; i <= subjectP.getDims(); i++) {
		determinant += (subjectP.getValueAtDim(i) - subjectQ.getValueAtDim(i));
	}
	
	return sqrt(determinant);
}