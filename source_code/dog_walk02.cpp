// dog_walk02.cpp
//

#include <iostream>
using namespace std;

class Dog {

	string name;

public:
	// Constructor with parameters
	Dog(string nm) { name = nm; }

	void time_for_walk() { cout << endl << name << ": " << "It's time for cat-chase!!!\n"; }
	void bark() { cout << endl << name << ": " << "Wow wow wow wow\n"; }
	string get_name() { return name; }

	// void shake_my_tail()
	// void chase_my_tail()

};

void walk_human_dog_interaction(Dog* a) {
	cout << "Me: Come on! It's time for a walk.\n";

};

int main() {

	Dog my_dog = Dog("Mourgos");
	walk_human_dog_interaction(&my_dog);

	my_dog.bark();

	return 0;
}
