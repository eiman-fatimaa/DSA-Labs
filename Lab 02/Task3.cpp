//Eiman Fatima
#include <iostream>
using namespace std;
int main() {
	int sales[2][3];
	int (*rowPtr)[3] = sales;
	for (int i = 0; i < 2; i++) {
		cout << "Branch " << i + 1 << " : ";
		for (int j = 0; j < 3; j++) {
			cin >> *(*(rowPtr + i) + j);
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << *(*(rowPtr + i) + j) << " ";
		}
		cout << endl;
	}
	int total = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			total += *(*(rowPtr + i) + j);
		}
		cout << "Total of Branch " << i + 1 << " : " << total << endl;
		total = 0;
	}

	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 2; i++) {
			total += *(*(rowPtr + i) + j);
		}
		cout << "Total of day " << j + 1 << " : " << total << endl;
		total = 0;
	}
	return 0;
}
