// dog_walk01.cpp
//

#include <iostream>
using namespace std;

class Dog {

	string name;

public:
	// Constructor with parameters
	Dog(string nm) { name = nm; }

	void time_for_walk() { cout << endl << name 
		<< ": Yeah! "
		<<"It's time for cat-chase!!!\n"; }
	void bark() { cout << endl << name << ": " 
		<< "Wow wow wow wow\n"; }
	string get_name() { return name; }

};

void human_dog_interaction(Dog* a) {
	cout << "Me: Come on! It's time for a walk.\n";
	a->time_for_walk();
};

int main() {

	Dog my_dog = Dog("Mourgos");

	Dog* pointer_to_dog = &my_dog;

	human_dog_interaction(pointer_to_dog);
	my_dog.bark();


	return 0;
}
