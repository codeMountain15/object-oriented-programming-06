// simple_ref_dog.cpp
//

#include <iostream>
using namespace std;

class Dog {
	string name;

public:
	// Constructor with parameters
	Dog(string nm) { name = nm; }
};

int main() {

	Dog my_dog1 = Dog("Mourgos");
	
	cout << "&my_dog1 = " << (int)&my_dog1 << endl;
	cout << "sizeof(mydog1) = " << sizeof(my_dog1) << endl;
	cout << "sizeof(&my_dog1) = " << sizeof(&my_dog1) << endl;
	
	return 0;
}
