#include <iostream>
#include "LinkedList.h"
#include "Stack.h"

Stack::Stack(int value){
	this->stack.append(value);
	this->size = 1;
}

void Stack::push(int value){
	this->stack.insetElementAtPosition(value, 0);
	this->size++;
}

int Stack::pop(){
	this->size--;
	return this->stack.deleteElementAtPosition(0);
}

int Stack::getSize(){
	return this->size;
}
