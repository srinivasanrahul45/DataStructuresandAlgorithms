#ifndef CUSTOMINCLUDES_QUEUE_H_
#define CUSTOMINCLUDES_QUEUE_H_

class Queue{
private:
	LinkedList queue;
	int size = 0;

public:
	// Constructor
	Queue(int value);

	// Member Functions
	void enqueue(int value);
	int dequeue();
	int getSize();
};

#endif /* CUSTOMINCLUDES_QUEUE_H_ */
