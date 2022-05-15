#include <iostream>


struct Node {
	int data;
	Node *next;

	Node(int x) {
		data = x;
	}
};


int main()
{
	Node *n = new Node(1);
	std::cout << sizeof(Node) << std::endl;
}
