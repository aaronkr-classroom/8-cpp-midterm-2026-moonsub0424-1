#pragma once


#ifndef GUARD_function_h
#define GUARD_function_h

#include <vector>
#include <string>

using std::string; using std::vector;


//구조체 설정 
struct Student {
	string name;
	vector<int> score_hap;
	double avg;
};

double calculateAverage(vector<int> grades);
#endif 
