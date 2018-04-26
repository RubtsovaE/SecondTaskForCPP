#include "stdafx.h"
#include "Iterator.h"
#include"Queue.h"

Iterator::Iterator(Queue &buffer) {
	this->buffer = &buffer;
}

Iterator::~Iterator() {
	delete this->buffer;
	delete this->it;
}

void Iterator::start() {
	this->it = new Queue(*buffer);
}

void Iterator::next() {
	it->pop(); 
}

bool Iterator::finish() {
	return it->isEmpty();
}

int Iterator::getValue() {
	return it->head();
}
