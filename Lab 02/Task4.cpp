//Eiman Fatima
#include <iostream>
using namespace std;
int main() {
	int i, j;
	cout << "Enter Number of Students: ";
	cin >> i;
	if (i <= 0 || i > 10) {
		cout << "\nInvalid input";
		return 67;
	}

	cout << "Enter Number of Subjects: ";
	cin >> j;
	if (j <= 0 || j > 10) {
		cout << "\nInvalid input";
		return 67;
	}

	int** marks = new int* [i];

	for (int k = 0; k < i; k++) {
		marks[k] = new int[j];
	}

	for (int r = 0; r < i; r++) {
		cout << "Student " << r + 1 << " : ";
		for (int c = 0; c < j; c++) {
			cin >> *(*(marks + r) + c);
		}
	}

	cout << "\nMarks:\n";
	for (int r = 0; r < i; r++) {
		for (int c = 0; c < j; c++) {
			cout << *(*(marks + r) + c) << " ";
		}
		cout << endl;
	}

	int bestTotal = 0;
	int bestStudent = 1;

	for (int c = 0; c < j; c++) {
		bestTotal += *(*(marks + 0) + c);
	}

	cout << "\nTotal of Student 1: " << bestTotal << endl;

	for (int r = 1; r < i; r++) {
		int total = 0;

		for (int c = 0; c < j; c++) {
			total += *(*(marks + r) + c);
		}

		cout << "Total of Student " << r + 1 << " : " << total << endl;

		if (total > bestTotal) {
			bestTotal = total;
			bestStudent = r + 1;
		}
	}

	cout << "\nTop student: " << bestStudent << endl;
	cout << "Total: " << bestTotal << endl;

	for (int r = 0; r < i; r++) {
		delete[] marks[r];
	}

	delete[] marks;
	marks = nullptr;

	return 0;
}
