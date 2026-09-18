//Eiman Fatima
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter Number of Marks: ";
	cin >> n;
	if (n <= 0 || n > 10) {
		cout << "\nInvalid input";
		return 67;
	}

	int* marks = new int[n];

	cout << "Enter Marks: ";
	for (int i = 0; i < n; i++) {
		cin >> *(marks + i);
	}

	cout << "\nOriginal Marks: ";
	for (int i = 0; i < n; i++) {
		cout << *(marks + i) << " ";
	}
	cout << endl;

	int* newMarks = new int[n + 1];

	for (int i = 0; i < n; i++) {
		*(newMarks + i) = *(marks + i);
	}

	cout << "Enter New Mark: ";
	cin >> *(newMarks + n);

	delete[] marks;

	marks = newMarks;
	n++;

	cout << "New Marks: ";
	for (int i = 0; i < n; i++) {
		cout << *(marks + i) << " ";
	}
	cout << endl;

	delete[] marks;
	marks = nullptr;

	return 0;
}
