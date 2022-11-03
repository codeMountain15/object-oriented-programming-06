// const_ref_error02.cpp
//

#include <iostream>
using namespace std;

class const_play {
public:
	string name;
};

void f1(const_play a) { a.name += '!'; }
void f2(const_play &a) { a.name += '?'; }
void f3(const const_play &a) { a.name += '!!!'; }

int main() {

	const_play a1;
	a1.name = "Sifis";
	
	f1(a1);
	cout << a1.name << endl;
	
	f2(a1);
	cout << a1.name << endl;

	f3(a1);
	cout << a1.name << endl;

	return 0;
}
