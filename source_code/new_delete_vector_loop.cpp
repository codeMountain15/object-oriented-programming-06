// new_delete_vector_loop.cpp
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

	for (int i = 0; i < 10; i++) {

		// create new objects dynamically (->heap)
		Tiny_Class* ptc = new Tiny_Class(i);
		collection.push_back(ptc);
	}

	for (auto r = collection.begin(); r != collection.end(); r++){
		// delete objects (->heap)
		delete* r;
	}

	return 0;
}
