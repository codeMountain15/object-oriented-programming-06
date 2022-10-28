// const_ref_error.cpp
//

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    string id;
};


// void change_attempt(Student& s){ // it would work!
void change_attempt(const Student& s){    // error...
    s.name = "James Bond";
    s.id = "007";
}

void print(const Student& s) {    // ok!
    cout << s.name << endl << s.id << endl;
}

int main() {

    Student s1;
    s1.name = "Takis";
    s1.id = "131";

    change_attempt(s1);  // error

    print(s1);

    return 0;
}
