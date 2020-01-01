#include <iostream>
using namespace std;

int main() {
	double time[1001] = {0};
	double week[1001] = {0};

	double rain;
	double WEEK;

	for (int j = 0; j < 7; j++) {
		for (int i = 0; i < 4; i++) {
			cin >> rain;
			WEEK = rain;

			week[j] += WEEK; 
			time[i] += rain;
		}
	}
	
	bool Dis = true;

	for (int i = 0; i < 7; i++) {		
		Dis = true;
		for (int j = 0; j < 7; j++) {
			int k;
			k = week[i] - week[j];
			if (k < 0) {
				Dis = false;
			}	
		}	
		if (Dis) {
			cout << i + 1 << "\n";
		}	
	}

	if (time[0] > time[1] && time[0] > time[2] && time[0] > time[3]) {
		cout << "morning";
	} else if (time[1] > time[0] && time[1] > time[2] && time[1] > time[3]) {
		cout << "afternoon";
	} else if (time[2] > time[1] && time[2] > time[0] && time[2] > time[3]) {
		cout << "night";
	} else {
		cout << "early morning";
	}
}
