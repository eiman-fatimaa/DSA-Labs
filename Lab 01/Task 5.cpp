// Eiman Fatima
#include <iostream>
#include <iterator>
using namespace std;
void reverse(int numbers[], int start, int size) {
	int temp = 0;
	if (start >= (size / 2)) {
		return;
	}
	temp = numbers[start];
		numbers[start] = numbers[size - start - 1];
		numbers[size - start - 1] = temp;

		reverse(numbers, start + 1, size);
}
int main() {
	int numbers[6];
	for (int i = 0; i < 6; i++) {
		cin >> numbers[i];
	}

	reverse(numbers, 0, size(numbers));
	
	for (int i = 0; i < 6; i++) {
		cout << numbers[i] << " ";
	}
	return 0;
}
