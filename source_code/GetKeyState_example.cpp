// GetKeyState_example.cpp
//

#include <iostream>
#include <chrono>	// for the time pace
#include <thread>	// for the time pace
#include <windows.h> // for keyboard input (windows)

using namespace std;

int main()
{
	using namespace chrono_literals;  // for the time pace

	int exit = 0;

	cout << "Waiting until you press: 0\n";

	while (exit != 1) {

		this_thread::sleep_for(200ms);	// for the time pace
		
		if (GetKeyState(VK_NUMPAD0) & 0x8000) // key press
		{									                   // 0x8000 -> key is
			cout << "\nexit\n";				        // currently pressed
			exit = 1;
		}
	
	}

}
