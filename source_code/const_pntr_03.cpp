// const_pntr_03.cpp
//

#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int a = 1;
	int b = 2;
	int* const p1 = &a;	// constant pointer

	cout << "*p1 = " << *p1 << endl;

	//p1 = &b; // pointer change	// error
	//cout << "*p1 = " << *p1 << endl;
	
	*p1 = 3;
	cout << "*p1 = " << *p1 << endl;
	
	return 0;
}
