// binary_tree_01.cpp
// 

#include <iostream>
using namespace std;

class komvos {
public:
	string data;
	komvos* left;
	komvos* right;

	komvos(string input)
	{
		data = input;

		// child for nodes initialization
		left = NULL;
		right = NULL;
	}
};

int main()
{
	// creating part the super family tree
	// that humans belong to, based on:
	// https://en.wikipedia.org/wiki/Human_evolution
	// https://en.wikipedia.org/wiki/Human_evolution#/media/File:Hominidae_chart.svg
	// last access: 29-10-2022

	// root, the first node
	komvos* root = new komvos("Hominoidea");

	/* following is the tree visualization

	Hominoidea
		/ \
	NULL  NULL

	*/

	root->left = new komvos("Hominidae");
	root->right = new komvos("Hylobatidae");
	/* 
		Hominoidea
			/	\
	Hominidae	 Hylobatidae
		/ \				/ \
	NULL NULL		  NULL NULL

	*/

	root->left->left = new komvos("Homininae");
	root->left->right = new komvos("Ponginae");
	/* 
			
				Hominoidea
				/	\
		Hominidae	 Hylobatidae
			/ \				/ \
	Homininae Ponginae	  NULL NULL
		/ \		/ \
	NULL NULL NULL NULL


	*/

	root->left->left->left = new komvos("Homini");

	/*

					Hominoidea
					/	\
			Hominidae	 Hylobatidae
				/ \				/ \
		Homininae Ponginae	  NULL NULL
			/ \		/ \
		NULL NULL NULL NULL
		/ \
	Homini NULL
	  / \
	NULL NULL

	*/

	root->left->left->left->left = new komvos("Homo");

	/*

						Hominoidea
						/	\
				Hominidae	 Hylobatidae
					/ \				/ \
			Homininae Ponginae	  NULL NULL
				/ \		/ \
			NULL NULL NULL NULL
			/ \
		Homini NULL
		  / \
		Homo NULL
		/ \
	 NULL NULL

	*/


	// don't forget to free
	// the allocated memory
	


	return 0;
}
