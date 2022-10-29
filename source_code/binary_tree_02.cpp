// binary_tree_02.cpp
// version 2
// with DFS print function
// and different constructor
// based on: binary_tree_01.cpp

#include <iostream>
using namespace std;

class Komvos {
private:
	string data;
	Komvos* left;
	Komvos* right;

public:
	Komvos(string data_input, Komvos* left_imput = NULL, Komvos* right_input = NULL)
		:data(data_input), left(left_imput), right(right_input) {}
	void print_tree_DFS();
};

int main()
{

	// we construct the nodes
	// and build the tree structure
	Komvos node07("Homo"), node06("Homini", &node07);
	Komvos node05("Ponginae"), node04("Homininae", &node06);
	Komvos node03("Hominidae", &node04, &node05);
	Komvos node02("Hylobatidae");
	Komvos node01("Hominoidea", &node02, &node03);

	node01.print_tree_DFS();
	

	return 0;
}

// Depth First Traversals (DFS) print
// Preorder
void Komvos::print_tree_DFS(){
	static unsigned short int counter = 1;

	cout << counter << ". " << data << endl;
	counter++;
	if (left != NULL) {	left->print_tree_DFS(); }
	if (right != NULL) { right->print_tree_DFS(); }

}
