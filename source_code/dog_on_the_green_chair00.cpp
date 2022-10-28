// dog_on_the_green_chair00.cpp
//

#include <iostream>
using namespace std;

class Dog {

	string name;

public:
	Dog(string nm) { name = nm; } // Constructor with parameters

	void time_for_walk() { cout << endl << name << ": " << "\nIt's time for cat-chase!!!\n"; }
	void bark() { cout << endl << name << ": " << "\nWow wow wow wow\n"; }
	string get_name() { return name; }
};

void human_dog_interaction(Dog* a) {
	cout << "\nMe: " << a->get_name() << " is on the green chair!\n";
};

int main() {

	Dog my_dog1 = Dog("Mourgos");
	Dog my_dog2 = Dog("Tolis");
	Dog my_dog3 = Dog("Ritsa");

	Dog* on_the_green_chair = &my_dog1;
	
	human_dog_interaction(on_the_green_chair);


	return 0;
}
