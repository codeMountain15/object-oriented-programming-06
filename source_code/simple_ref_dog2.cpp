// simple_ref_dog2.cpp
//

#include <iostream>
using namespace std;

class Dog {
	string name;

public:
	// Constructor with parameters
	Dog(string nm) { name = nm; }
	void print() { cout << name << endl; }
};

int main() {

	Dog my_dog1 = Dog("Mourgos");
	Dog& the_best_cat_chaser = my_dog1;
	
	cout << "'my_dog1' real name is:             ";
	my_dog1.print();

	cout << "'the_best_cat_chaser' real name is: ";
	the_best_cat_chaser.print();

	cout << "\n&my_dog1             = " 
		<< &my_dog1 << endl 
		<< "&the_best_cat_chaser = " 
		<< &the_best_cat_chaser << endl;
	
	return 0;
}
