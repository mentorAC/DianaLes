#include<iostream>
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));

	int sikretNumber = rand()%20;
	int counter = 0;
	int enternumber;
	while (true) {
		cin >> enternumber;
		if (enternumber > sikretNumber) {
			cout << "more than necessary " << endl;
		}
		else if(enternumber < sikretNumber) {
			cout << "less than needed " << endl;
		}
		else {
			cout << "Your win" << endl;
			break;
		}

	}
	return 0;
}