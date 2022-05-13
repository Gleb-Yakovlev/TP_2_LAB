#pragma warning(disable:6386)
#include "queue.h"

Queue::Queue()
{
	srand(time(0));
	for (int i = 0; i < size; ++i) {
		if (isFull()) return;
		else {
			if (front == -1) front = 0;
			rear = (rear + 1) % size;
			items[rear] = 5 + rand() % 26;
		}
	}
}

Queue::~Queue(){}

bool Queue::isFull()
{
	if (front == 0 && rear == size - 1) {
		return true;
	}
	if (front == rear + 1) {
		return true;
	}
	return false;
}

bool Queue::isEmpty() {
	if (front == -1) return true;
	else return false;
}

Queue Queue::operator+(Queue)
{
	cout << "Select 1 element" << endl;
	int number1 = safe_input();
	cout << "Select 2 element" << endl;
	int number2 = safe_input();
	int value = 0;
	for (int i = front; i <= rear; i = i++) {
		if (i == number2-1) { value = items[i]; break; }
	}
	for (int i = front; i <= rear; i = i++) {
		if (i == number1-1) { items[i] += value; break; }
	}
	return *this;
}

Queue Queue::operator-(Queue)
{
	cout << "Select 1 element" << endl;
	int number1 = safe_input();
	cout << "Select 2 element" << endl;
	int number2 = safe_input();
	int value = 0;
	for (int i = front; i <= rear; i = i++) {
		if (i == number2 - 1) { value = items[i]; break; }
	}
	for (int i = front; i <= rear; i = i++) {
		if (i == number1 - 1) { items[i] -= value; break; }
	}
	return *this;
}

Queue Queue::operator/(Queue)
{
	cout << "Select 1 element" << endl;
	int number1 = safe_input();
	cout << "Select 2 element" << endl;
	int number2 = safe_input();
	int value = 0;
	for (int i = front; i <= rear; i = i++) {
		if (i == number2 - 1) { value = items[i]; break; }
	}
	for (int i = front; i <= rear; i = i++) {
		if (i == number1 - 1) { items[i] /= value; break; }
	}
	return *this;
}

Queue Queue::operator*(Queue)
{
	cout << "Select 1 element" << endl;
	int number1 = safe_input();
	cout << "Select 2 element" << endl;
	int number2 = safe_input();
	int value = 0;
	for (int i = front; i <= rear; i = i++) {
		if (i == number2 - 1) { value = items[i]; break; }
	}
	for (int i = front; i <= rear; i = i++) {
		if (i == number1 - 1) { items[i] *= value; break; }
	}
	return *this;
}

Queue Queue::operator+=(int value)
{
	cout << "Select number of element" << endl;
	int number = safe_input();
	for (int i = front; i <= rear; i = i++) {
		if (i == number - 1) { items[i] += value; break; }
	}
	return *this;
}

Queue Queue::operator-=(int value)
{
	cout << "Select number of element" << endl;
	int number = safe_input();
	for (int i = front; i <= rear; i = i++) {
		if (i == number - 1) { items[i] -= value; break; }
	}
	return *this;
}

Queue Queue::operator/=(int value)
{
	cout << "Select number of element" << endl;
	int number = safe_input();
	for (int i = front; i <= rear; i = i++) {
		if (i == number - 1) { items[i] /= value; break; }
	}
	return *this;
}

Queue Queue::operator*=(int value)
{
	cout << "Select number of element" << endl;
	int number = safe_input();
	for (int i = front; i <= rear; i = i++) {
		if (i == number - 1) { items[i] *= value; break; }
	}
	return *this;
}
