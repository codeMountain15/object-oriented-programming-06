// dog_on_the_chair00.cpp
//

#include <iostream>
using namespace std;

class Dog {
	string name;

public:
	// Constructor with parameters
	Dog(string nm) { name = nm; }

	void time_for_walk() { cout << endl << name << ": " << "\nIt's time for cat-chase!!!\n"; }
	void bark() { cout << endl << name << ": " << "\nWow wow wow wow\n"; }
	string get_name() { return name; }
};

void human_dog_interaction(Dog* a) {
	cout << a->get_name() << " is on the green chair!\n";
};

int main() {

	Dog my_dog1 = Dog("Mourgos");
	Dog my_dog2 = Dog("Tolis");
	Dog my_dog3 = Dog("Ritsa");

	Dog* pointer_to_dog;
	
	pointer_to_dog = &my_dog1;
	human_dog_interaction(pointer_to_dog);

	pointer_to_dog = &my_dog2;
	human_dog_interaction(pointer_to_dog);

	pointer_to_dog = &my_dog3;
	human_dog_interaction(pointer_to_dog);

	return 0;
}
