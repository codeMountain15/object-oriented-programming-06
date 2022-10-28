// const_pntr_02.cpp
//

#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int a = 1;
	int b = 2;
	const int* p1;
	
	p1 = &a;
	cout << "*p1 = " << *p1 << endl;

	p1 = &b; // pointer change
	cout << "*p1 = " << *p1 << endl;

	//*p1 = 3; // value change	// error
	//cout << "*p1 = " << *p1 << endl;
	
	cout << " b = " << b << endl;
	
	return 0;
}
