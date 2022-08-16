#ifndef CUSTOMINCLUDES_STACK_H_
#define CUSTOMINCLUDES_STACK_H_

class Stack{
private:
	LinkedList stack;
	int size = 0;

public:
	// Constructors
	Stack(int value);

	// Member Functions
	void push(int value);
	int pop();
	int getSize();

};

#endif /* CUSTOMINCLUDES_STACK_H_ */
