// const_pntr_04.cpp
//

#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int a = 1;
	int b = 2;
	const int* const p1 = &a;	// const pointer
								// to const int

	cout << "*p1 = " << *p1 << endl;
	
	return 0;
}
