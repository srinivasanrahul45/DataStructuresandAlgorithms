#include <iostream>
#include "BinarySearchTree.h"

struct Node* BinarySearchTree::insert_tree(Node* base_node, int new_val){
	// Create if node does not exists
	if(base_node == nullptr){
		base_node = new Node(); // In C, (Node*) malloc(sizeof(Node));
		base_node->left = nullptr;
		base_node->right = nullptr;
		base_node->value = new_val;
		return base_node;
	}

	if(new_val < base_node->value){
		base_node->left = insert_tree(base_node->left, new_val);
	}

	if(new_val > base_node->value){
		base_node->right = insert_tree(base_node->right, new_val);
	}

	return base_node;
}

bool BinarySearchTree::search_tree(Node* base_node, int find_val){
	if(base_node->value == find_val){
		return true;
	}

	if((((base_node->left == nullptr) && (base_node->right == nullptr))) &&
			((base_node->left == nullptr) || (base_node->right == nullptr))){
		return false;
	}

	return (search_tree(base_node->left, find_val)) || (search_tree(base_node->right, find_val));
}

void BinarySearchTree::insert(int new_val){
	root = insert_tree(root, new_val);
}

bool BinarySearchTree::search(int find_val){
	return search_tree(root, find_val);
}
