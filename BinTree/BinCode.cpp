#include <iostream>

class BinaryTreeNode {
public:
	int value{};
	BinaryTreeNode* left;
	BinaryTreeNode* right;
	BinaryTreeNode(int value) {
		this->value = value;
		left = NULL;
		right = NULL;
	}
	
	void addNode(int value) {
		if (value <= this->value) {
			if (left == nullptr) {
				left = new BinaryTreeNode(value);
			}
			else {
				left->addNode(value);
			}
		}
		else {
			if (right == nullptr) {
				right = new BinaryTreeNode(value);
			}
			else {
				right->addNode(value);
			}
		}
	}
	void print() {
		if (left != nullptr) {
			left->print();
		}

		std::cout << value << " ";

		if (right != nullptr) {
			right->print();

		}
	}
/*
			5
		4		9
	3		  6	 12
*/

};

int main() {
	BinaryTreeNode root(10);
	for (int i = 0; i < 5; i++) {
		root.addNode(rand() % 20);
	}
	root.print();

}