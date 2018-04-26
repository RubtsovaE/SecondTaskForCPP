#include "stdafx.h"
#ifndef ITERATOR_H
#define ITERATOR_H
#include"Queue.h"
//#include "../Queue/Queue.h"

class Iterator{
private:
	Queue *buffer = nullptr;
	Queue *it = nullptr;
	int index;
	int count;
public:
	Iterator(Queue&);
	~Iterator();
	void start();
	void next();
	bool finish();
	int getValue();
};

#endif