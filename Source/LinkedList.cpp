#include <iostream>
#include "LinkedList.h"

Element::Element(){
	this->value = 0;
	this->next = nullptr;
}

Element::Element(int value) {
	this->value = value;
	this->next = nullptr;
}

LinkedList::LinkedList(){
	this->head = nullptr;
}

void LinkedList::append(int value){
	Element *element = new Element(value);

	// Insert to head
	if(this->head == nullptr){
		this->head = element;
		return;
	} else {
		// Insert after head
		Element *current = this->head;
		while(current->next){
			current = current->next;
		}
		current->next = element;
	}
}

int LinkedList::getElementFromPosition(int position){
	// Position starts at Zero (0).
	Element *ele = this->head;
	for(uint8_t i = 0; i < position; i++){
		ele = ele->next;
	}
	return ele->value;
}

void LinkedList::insetElementAtPosition(int value, int position){
	Element *current = this->head;
	Element *prev_element = nullptr;
	Element *new_element = new Element(value);

	if(position == 0){
		new_element->next = this->head;
		this->head = new_element;
	} else {
		for(uint8_t i = 0; i < position; i++){
			if(i == (position - 1)){
				prev_element = current;
			}
			current = current->next;
		}
		new_element->next = current;
		prev_element->next = new_element;
	}

}

int LinkedList::deleteElementAtPosition(int position){
	Element *current = this->head;
	Element *prev_element = nullptr;
	int ret_element;

	if(position == 0){
		ret_element = current->value;
		this->head = current->next;
	} else {
		for(uint8_t i = 0; i < position; i++){
			if(i == (position - 1)){
				prev_element = current;
			}
			current = current->next;
		}
		ret_element = current->value;
		prev_element->next = current->next;
	}

	return ret_element;
}

int LinkedList::getListLength(){
	int lenght = 1;
	Element *current = this->head;

	while(current->next){
		current = current->next;
		lenght++;
	}
	return lenght;
}
