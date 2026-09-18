//Eiman Fatima
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter total number of students: ";
	cin >> n;
	if (n <= 0 || n > 10) {
		cout << "Error: Number must be greater than 0\n";
		return 67;
	}
	int* marks = new int[n];
	cout << "\nEnter Marks (0-100): ";
	for (int i = 0; i < n; i++) {
		cin >> *(marks + i);
	}
	int count = 0;
	float avg = 0.0;
	int total = 0;
	cout << "\nMarks: ";
	for (int i = 0; i < n; i++) {
		cout << *(marks + i) << " ";
		if (*(marks+i) >= 50) {
			count++;
		}
		total += *(marks + i);	
	}
	avg = float(total) / float(n);
	cout << "\nTotal: " << total;
	cout << "\nAverage: " << avg;
	cout << "\nNo. of marks more than 50: " << count;

	delete[] marks;
	marks = nullptr;

	return 0;
}
