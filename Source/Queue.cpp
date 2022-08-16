#include <iostream>
#include "LinkedList.h"
#include "Queue.h"

Queue::Queue(int value){
	this->queue.append(value);
	this->size = 1;
}

void Queue::enqueue(int value){
	this->queue.insetElementAtPosition(value, 0);
	this->size++;
}

int Queue::dequeue(){
	this->size--;
	return this->queue.deleteElementAtPosition(this->size);
}

int Queue::getSize(){
	return this->size;
}
