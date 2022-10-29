// random_example.cpp
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
        cout << "random number " 
        << i << ": " << rand() 
        << endl;

    return 0;
}
