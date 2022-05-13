#pragma once
#include "safe_input.h"
#include <iostream>
using namespace std;
class coordinates {
public:
	int x, y, z;
	coordinates& operator ++(); // ++a
	friend coordinates operator ++(coordinates &, int);// a++
	friend coordinates& operator --(coordinates&);//--a
	coordinates operator --(int);//a--
	coordinates();
	~coordinates();
};