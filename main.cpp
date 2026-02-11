#include <iostream>
#include <vector>
#include "subject.h"
#include "relations.h"


int main() {
	Subject mySubject(3);
	Subject subject2(2);
	
	std::vector<Subject*> subjectList;

	double distance1to2 = findDistance(mySubject, subject2);

	std::cout << distance1to2 << std::endl;

	return 0;
}