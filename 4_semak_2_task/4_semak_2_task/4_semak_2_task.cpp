// 4_semak_2_task.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "locale.h"
#include "conio.h"
#include "stdlib.h"
#include <iostream>
#include "Iterator.h"
#include "Queue.h"
#define SIZE 11
#define COUNT 5

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "RUS");
	system("color 75");

	cout << "Start" << endl;

	Queue buffer = Queue(SIZE);
	for (int i = 0; i < SIZE; i++) {
		buffer.push(i);
	}
    cout << "Size of queue: " << buffer.getSize() << endl;
	cout << "Head of queue: " << buffer.head() << endl;
	try {
		buffer.push(0);
	}
	catch (char* e) {
		cout << "/Error/ " << e << endl;
	}

	Iterator iterator = Iterator(buffer);
	cout << "Queue written "<<COUNT<<" times using an iterator: " << endl;

	for (int i = 0; i < COUNT; i++) {
		iterator.start();
		while (!iterator.finish()) {
			cout << iterator.getValue() << " ";
			iterator.next();
		}
		cout << endl;
	}

	cout << "Queue after popping one element: " << std::endl;
	buffer.pop();
	iterator.start();
	while (!iterator.finish()) {
		std::cout << iterator.getValue() << " ";
		iterator.next();
	}
	cout << endl;
	
	cout << "Queue after do empty: " << endl;
	buffer.doEmpty();
	iterator.start();
	while (!iterator.finish()) {
		std::cout << iterator.getValue() << " ";
		iterator.next();
	}
	cout << endl;

	try {
		buffer.pop();
	}
	catch (char* e) {
		cout << "/Error/ " << e << endl;
	}
    cout << endl;

	return 0;
}

