#include <iostream>
#include <ios>
#include <vector>
#include <string>
#include "function.h"
#include <algorithm>


using namespace std;

int main(void) {

	int num;
	string name;
	
	vector<Student> l;


	cout << "Enter number of students: ";
	cin >> num;

	cout << endl;

	for (int i = 0; i < num; i++) {
		Student s;

		cout << "== Student" << i + 1 << "==" << endl;
		cout << "Enter name: ";
		cin >> s.name;


		cout << "Enter 3 scores: ";
		for (int j = 0; j < 3; j++) {
			int sc;
			cin >> sc;
			s.score_hap.push_back(sc);
		}

		cout << endl;

		s.avg = calculateAverage(s.score_hap);
		l.push_back(s);
	}

	cout << "--- Grade Summary ---" << endl << endl;

	for (int k = 0; k < l.size(); k++) {
		
		cout << l[k].name << ":" << l[k].avg << endl;
		
		if (l[k].avg >= 90) {
			cout << "Excellent" << endl;
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;

	return 0;

}
