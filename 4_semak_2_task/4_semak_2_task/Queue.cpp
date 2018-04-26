#include "stdafx.h"
#include "stdafx.h"
#include "stdexcept"
#include "Queue.h"

Queue::Queue(int size) {
	this->size = size;
	this->elems = 0;
	this->top = 0;
	this->tail = 0;
	this->queue = new int[size];
}

Queue::~Queue() {
	this->elems = 0;
	this->size = 0;
	this->top = 0;
	this->tail = 0;
	delete[] this->queue;
}

void Queue::push(int elem) {
	if (elems >= size) {
		throw "There is no place to push! ";
	}
	queue[tail] = elem;
	elems++;
	if (tail == size - 1){
		tail = 0;
	} else{
		tail++;
	}
}

int Queue::pop() {
	int temp = head();
	elems--;
	if (top == size - 1){
		top = 0;
	}
	else{
		top++;
	}
	return temp;
}

int Queue::head() {
	if (isEmpty()) {
		throw "Queue is empty! ";
	}
	return queue[top];
}

int Queue::getSize() {
	return elems;
}

void Queue::doEmpty() {
	for (int i = 0; i < this->elems; i++) {
		this->queue[i] = 0;
	}
	elems = 0;
}

bool Queue::isEmpty() {
	return elems == 0;
}
