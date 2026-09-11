// Eiman Fatima
#include <iostream>
using namespace std;
int main() {
	int numbers[8];
	int max_index = 0; 
	int min_index = 0;
	for (int i = 0; i < 8; i++) {
		cin >> numbers[i];
	}
	int max = numbers[0];
	int min = numbers[0]; 
	for (int i = 0; i < 8; i++) {
		if (numbers[i] < min) {
			min = numbers[i];
			min_index = i;
		}
		if (numbers[i] > max) {
			max = numbers[i];
			max_index = i;
		}
	}
	cout << "max number: " << max << endl;
	cout << "max index: " << max_index << endl;
	cout << "min number: " << min << endl;
	cout << "min index: " << min_index << endl;
return 0;
}