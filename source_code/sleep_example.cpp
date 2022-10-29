#include <iostream>
#include <chrono>	// for the time pace
#include <thread>	// for the time pace

using namespace std;



int main()
{
	using namespace chrono_literals; // for the time pace
					// it works for windows
	int exit = 1;

	while (exit <= 10) {
		
		this_thread::sleep_for(200ms);	// for the time pace
		cout << exit++ << endl;	
	}

}
