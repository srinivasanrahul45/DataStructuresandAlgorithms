#ifndef CUSTOMINCLUDES_LINKEDLIST_H_
#define CUSTOMINCLUDES_LINKEDLIST_H_

class Element{
public:
	Element *next;
	int value;

	// Constructor
	Element();
	Element(int value);
};

class LinkedList{
private:
	Element *head;

public:
	// Constructor
	LinkedList();

	// Member Functions
	void append(int value);
	int getElementFromPosition(int position);
	void insetElementAtPosition(int value, int position);
	int deleteElementAtPosition(int position);
	int getListLength();
};

#endif
