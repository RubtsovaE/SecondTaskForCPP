#include "stdafx.h"
#include <iostream>
#ifndef QUEUE_H
#define QUEUE_H

class Queue{
private:
	int *queue = nullptr;
	int size;
	int elems;
	int top;
	int tail;
public:
	Queue(int);
	~Queue();
	void push(int);
	int pop();
	int head();
	int getSize();
	void doEmpty();
	bool isEmpty();
};

#endif 