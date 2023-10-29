#include <iostream>

class BinaryTreeNode {
private:
	int value{};
	BinaryTreeNode* left = nullptr;
	BinaryTreeNode* right = nullptr;
public:
	BinaryTreeNode(int value) {
		this->value = value;
	}
	// 5 9 12
	void addNode(int value) {
		if (value <= this->value) {
			if (left == nullptr) {
				BinaryTreeNode leftvalue(value);
				left = &leftvalue;
			}
			else {
				left->addNode(value);
			}
		}
		else {
			if (right == nullptr) {
				BinaryTreeNode rightvalue(value);
				right = &rightvalue;
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
		if (right != nullptr) {
			right->print();
		}
		std::cout << value << " ";
	}


};

int main() {
	BinaryTreeNode root(5);
	root.addNode(9);
	root.addNode(12);
	root.addNode(4);
	root.addNode(3);
	root.addNode(6);
	root.print();
}