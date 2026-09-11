// Eiman Fatima
#include <iostream>
using namespace std;
class Student {
public:
	int rollnumber;
	int marks;
	void display(){
		cout << "Roll Number: " << rollnumber << endl;
		cout << "Marks: " << marks << endl;
	}
};
int main() {
	Student s1;
	s1.rollnumber = 1;
	s1.marks = 75;
	s1.display();

	Student s2;
	s2.rollnumber = 2;
	s2.marks = 90;
	s2.display();

	/* expected output :
	Roll Number: 1
	Marks: 75
	Roll Number: 2
	Marks: 90
	*/

	s1.marks = 80;
	s1.display();
	s2.display(); 

	// s2.marks will not change because changing one object doesnot affect other objects at all

	return 0;
} 
