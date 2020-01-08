#include <iostream>
using namespace std;

int main() {
	string word;
	cin >> word;

	int wordnum = 0;
	int wordnumf;
	
	
	for (int i = 0; word[i] != '\0'; i++) {
	wordnum++;
	}
	
	int j = wordnum - 1;
	
	wordnumf = wordnum / 2; 

	bool Dis = true;

	for (int i = 0; i < wordnumf; i++) {
		if (word[i] != word[j]) {
			Dis = false;
		}
		j--;
	}

	if (Dis) {
		cout << "YES" << "\n";
		
		for (int i = 0; i < wordnumf; i++) {
			cout << word[i];
		}
	} else {
		cout << "NO";
	}
}
