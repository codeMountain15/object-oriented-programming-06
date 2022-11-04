// new_delete_for_vector.cpp
//

#include <iostream>
#include <vector>

using namespace std;

class Tiny_Class {
public:
	short int a;
	Tiny_Class(short int input) { a = input; }
	~Tiny_Class() { cout << "Destructor of " << a << " is activated" << endl; }
};

vector<Tiny_Class*> collection;

int main() {

	short int number = 1;

	cout << "Give a number (1-10)" << endl;
	cin >> number;

	for (short int i = 1; i <= number; i++) {

		// create new objects dynamically (->heap)
		Tiny_Class* ptc = new Tiny_Class(i);
		collection.push_back(ptc);
	}

	for (auto r = collection.begin(); r != collection.end(); r++) {
		// delete objects (->heap)
		delete* r;
	}

	return 0;
}
