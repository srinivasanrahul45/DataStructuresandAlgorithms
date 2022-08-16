#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include "SearchingAlgorithms.h"
#include "SortingAlgorithms.h"
#include "BinarySearchTree.h"

using namespace std;

int main(int argc, char **argv){
//	LinkedList list = LinkedList();
//	list.append(10);
//	list.append(20);
//	list.append(30);
//	list.append(40);
//	list.append(50);
//
//	cout << "Linked List:" << endl;
//	for(uint8_t i = 0; i < list.getListLength(); i++){
//		cout << list.getElementFromPosition(i) << " -> ";
//	}
//	cout << endl;
//
//	list.insetElementAtPosition(15, 0);
//	list.insetElementAtPosition(25, list.getListLength());
//	for(uint8_t i = 0; i < list.getListLength(); i++){
//		cout << list.getElementFromPosition(i) << " -> ";
//	}
//	cout << endl;
//
//	cout << "Removed element " << list.deleteElementAtPosition(0) << endl;
//	for(uint8_t i = 0; i < list.getListLength(); i++){
//		cout << list.getElementFromPosition(i) << " -> ";
//	}
//	cout << endl;
//
//	Stack stack = Stack(1);
//	stack.push(2);
//	stack.push(3);
//	stack.push(4);
//	stack.push(5);
//
//	cout << "\nStack:" << endl;
//	int stack_size = stack.getSize();
//	for(uint8_t i = 0; i < stack_size; i++){
//		cout << "Poped " << stack.pop() << endl;
//	}
//	cout << endl;
//
//	Queue queue = Queue(1);
//	queue.enqueue(2);
//	queue.enqueue(3);
//	queue.enqueue(4);
//	queue.enqueue(5);
//
//	cout << "Queue:" << endl;
//	int queue_size = queue.getSize();
//	for(uint8_t i = 0; i < queue_size; i++){
//		cout << "Removed " << queue.dequeue() << endl;
//	}
//	cout << endl;

//	SearchingAlgorithms search = SearchingAlgorithms();
//	int input_array[10] = {12,22,23,33,34,37,45,56,78,90};
//	int target = 34;
//	cout << "Element found using Binary Search at position " << search.arrayBinarySearch(input_array, 10, target) << endl;
//	cout << "Element found using Linear Search at position " << search.arrayLinearSearch(input_array, 10, target) << endl;

//	SortingAlgorithms sort = SortingAlgorithms();
//	int size = 10;
//	int array[size] = {21, 4, 1, 3, 9, 20, 14, 6, 21, 25};
//	// int array[size] = {5, 4, 3, 2, 1};
//	int *ptr_array = &array[0];
//	cout << "[";
//	for(uint8_t i = 0; i < size; i++){
//		cout << ptr_array[i] << " ";
//	}
//	cout << "]" << endl;

//	ptr_array = sort.bubbleSort(ptr_array, size);
//	cout << "Using Sorted Array:" << endl << "[ ";
//	for(uint8_t i = 0; i < size; i++){
//		cout << ptr_array[i] << " ";
//	}
//	cout << "]" << endl;

//	ptr_array = sort.cyclicSort(ptr_array, size);
//	cout << "Using Cyclic Sorted Array:" << endl << "[ ";
//	for(uint8_t i = 0; i < size; i++){
//		cout << ptr_array[i] << " ";
//	}
//	cout << "]" << endl;

//	ptr_array = sort.selectionSort(ptr_array, size);
//	cout << "Using Selection Sort Array:" << endl << "[ ";
//	for(uint8_t i = 0; i < size; i++){
//		cout << ptr_array[i] << " ";
//	}
//	cout << "]" << endl;

//	ptr_array = sort.insertionSort(ptr_array, size);
//	cout << "Using Insertion Sort Array:" << endl << "[ ";
//	for(uint8_t i = 0; i < size; i++){
//		cout << ptr_array[i] << " ";
//	}
//	cout << "]" << endl;

//	ptr_array = sort.mergeSort(ptr_array, size);
//	cout << "Using Merge Sort Array:" << endl << "[ ";
//	for(uint8_t i = 0; i < size; i++){
//		cout << ptr_array[i] << " ";
//	}
//	cout << "]" << endl;

//	ptr_array = sort.quickSort(array, size);
//	cout << "Using Quick Sort Array:" << endl << "[ ";
//	for(uint8_t i = 0; i < size; i++){
//		cout << ptr_array[i] << " ";
//	}
//	cout << "]" << endl;

	BinarySearchTree tree = BinarySearchTree();
	// Insert
	tree.insert(4);
	tree.insert(2);
	tree.insert(1);
	tree.insert(3);
	tree.insert(5);
	// Search
	cout << "Is element 1 present in the tree? " << tree.search(1) << endl;
	cout << "Is element 10 present in the tree? " << tree.search(10) << endl;


	return 0;
}
