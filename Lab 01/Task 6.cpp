// Eiman Fatima
#include <iostream>
using namespace std;
int main() {
	int numbers[10];
	for (int i = 0; i < 10; i++) {
		cin >> numbers[i];
	}
	int count = 0;
	for (int i = 0; i < 10; i++) {
		int value = numbers[i];
		bool found = 0;
		for (int j = 0; j < count; j++) {
			if (numbers[j] == value) {
				found = 1;
				break;
			}
		}

		if (!found) {
			numbers[count] = value;
			count++;
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << numbers[i] << " ";
	}
	return 0;
}
