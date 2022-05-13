#pragma once
#pragma warning(disable:6386)
#include "safe_input.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Queue {
public:
	int size = 5 + rand() % 26;
	int* items = new int (size);
	int front = -1, rear = -1;
	Queue();
	~Queue();
	bool isFull();
	bool isEmpty();
	Queue operator+(Queue);
	Queue operator-(Queue);
	Queue operator/(Queue);
	Queue operator*(Queue);
	Queue operator+=(int);
	Queue operator-=(int);
	Queue operator/=(int);
	Queue operator*=(int);
};