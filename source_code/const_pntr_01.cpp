// const_pntr_01.cpp
//

#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int a = 1;
	int b = 2;
	int* a1;
	
	a1 = &a;
	cout << "*a1 = " << *a1 << endl;

	a1 = &b; // pointer change
	cout << "*a1 = " << *a1 << endl;

	b = 3; // value change
	cout << "*a1 = " << *a1 << endl;

	return 0;
}
