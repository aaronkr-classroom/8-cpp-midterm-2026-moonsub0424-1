#include <iostream>
#include <ios>
#include <vector>
#include <string>
#include "function.h"


double calculateAverage(vector<int> grades) {
    int total = 0;

        for (int i = 0; i < grades.size(); i++) {
            total += grades[i];
        }

    return (double)total / grades.size();
}
