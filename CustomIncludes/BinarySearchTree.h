#ifndef CUSTOMINCLUDES_BINARYSEARCHTREE_H_
#define CUSTOMINCLUDES_BINARYSEARCHTREE_H_

struct Node{
	int value = 0;
	struct Node (*left) = nullptr;
	struct Node (*right) = nullptr;
};

class BinarySearchTree{
private:
	struct Node (*root) = nullptr;

	// Private methods
	struct Node* insert_tree(Node* base_node, int new_val);
	bool search_tree(Node* base_node, int find_val);

public:
	void insert(int new_val);
	bool search(int find_val);
};

#endif
