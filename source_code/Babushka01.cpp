// Babushka01.cpp
//

#include <iostream>
using namespace std;

class Babushka {

	string name;
	Babushka* smaller_B;

public:
	// Constructor with parameters
	Babushka(string nm, Babushka* in = NULL) { name = nm; smaller_B = in; }

	string get_name() const { return name; }
	Babushka* get_smaller_B() const { return smaller_B; }
};


int main() {

	//Dog my_dog = Dog("Mourgos");
	Babushka b1("Babuska #01");
	Babushka b2("Babuska #02", &b1);
	Babushka b3("Babuska #03", &b2);

	cout << b3.get_name() << endl;
	cout << (b3.get_smaller_B())->get_name() << endl;
	cout << ((b3.get_smaller_B())->get_smaller_B())->get_name() << endl;


	return 0;
}
