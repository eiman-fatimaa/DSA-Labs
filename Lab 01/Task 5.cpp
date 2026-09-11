// Eiman Fatima
#include <iostream>
using namespace std;
void reverse(int numbers[], int start) {
	int temp = 0;
	if (start >= 3) {
		return;
	}
	temp = numbers[start];
	numbers[start] = numbers[5 - start];
	numbers[5 - start] = temp;

	reverse(numbers, start + 1);
}
int main() {
	int numbers[6];
	for (int i = 0; i < 6; i++) {
		cin >> numbers[i];
	}

	reverse(numbers, 0);
	
	for (int i = 0; i < 6; i++) {
		cout << numbers[i] << " ";
	}
	return 0;
}
