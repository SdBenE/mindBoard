#include <iostream>
#include <vector>
#include "subject.h"
#include "relations.h"


int main() {
	std::vector<double> set1 = {0.1, -.3, .1};
	std::vector<double> set2 = { -0.3, -0.6, 0.3};

	Subject mySubject(set1);
	Subject subject2(set2);
	
	std::vector<Subject*> subjectList;
	subjectList.push_back(&mySubject);
	subjectList.push_back(&subject2);



	double distance1to2 = findDistance(mySubject, subject2);

	std::cout << distance1to2 << std::endl;

	std::cout << (subjectList.at(0))->getName() << std::endl;

	return 0;
}