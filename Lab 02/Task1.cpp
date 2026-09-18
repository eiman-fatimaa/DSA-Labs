//Eiman Fatima
#include <iostream>
using namespace std;
int main() {
	int sales[5];
	int* p = sales;
	for (int i = 0; i < 5; i++) {
		//taking values one by one to ensure non-negative values
		cout << "Enter items sold on day " << i+1 << endl;
		cin >> *(p + i);
		if (*(p + i) < 0) {
			cout << "Error: Negative values not allowed \n";
			i--; //this cancels the iteration
		}
	}
	int total = 0;
	cout << "\nSales: ";
	for (int i = 0; i < 5; i++) {
		cout<< *(p + i)<< " ";
		total += *(p + i);
	}
	cout << "\nTotal Items Sold: " << total;

	*(p+2) = (*(p + 2) + 2); //updatinf third element
	total = 0;
	cout << "\nSales (updated): ";
	for (int i = 0; i < 5; i++) {
		cout << *(p + i)<< " ";
		total += *(p + i);
	}
	cout << "\nTotal Items Sold (updated): " << total;

	return 0;
}
