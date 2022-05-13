#include "coordinates.h"

coordinates::coordinates()
{
	cout << "Enter coordinates" << endl;
	cout << "Enter x" << endl;
	x = safe_input();
	cout << "Enter y" << endl;
	y = safe_input();
	cout << "Enter z" << endl;
	z = safe_input();
	system("cls");
}

coordinates::~coordinates(){
	x = 0;
	y = 0;
	z = 0;
}

coordinates& coordinates::operator++() //++a
{
	cout << "Enter the number" << endl;
	int a = safe_input();
	cout << "Choose a coordinate" << endl
		<< "1)x" << endl
		<< "2)y" << endl
		<< "3)z" << endl;
	while (1) {
		int b = safe_input();
		switch (b)
		{
		case 1: {this->x = this->x + a; return *this; }
		case 2: {this->y = this->y + a; return *this; }
		case 3: {this->z = this->z + a; return *this; }
		default: break;
		}
	}
}

coordinates operator++(coordinates& c, int)//a++
{
	int max = 0;
	if (c.x >= c.y && c.x >= c.z) max = c.x;
	if (c.y >= c.x && c.y >= c.z) max = c.y;
	if (c.z >= c.x && c.z >= c.y) max = c.z;
	cout << "Choose a coordinate" << endl
		<< "1)x" << endl
		<< "2)y" << endl
		<< "3)z" << endl;
	while (1) {
		int b = safe_input();
		switch (b)
		{
		case 1: {
			c.x = c.x + max;
			return c; }
		case 2: {
			c.y = c.y + max;
			return c; }
		case 3: {
			c.z = c.z + max;
			return c; }
		default: break;
		}
	}
}

coordinates& operator--(coordinates& c)//--a
{
	cout << "Enter the number" << endl;
	int a = safe_input();
	cout << "Choose a coordinate" << endl
		<< "1)x" << endl
		<< "2)y" << endl
		<< "3)z" << endl;
	while (1) {
		int b = safe_input();
		switch (b)
		{
		case 1: {c.x = c.x - a; return c; }
		case 2: {c.y = c.y - a; return c; }
		case 3: {c.z = c.z - a; return c; }
		default: break;
		}
	}
}

coordinates coordinates::operator--(int)//a--
{
	int min = 0;
	if (this->x <= this->y && this->x <= this->z) min = this->x;
	if (this->y <= this->x && this->y <= this->z) min = this->y;
	if (this->z <= this->x && this->z <= this->y) min = this->z;
	cout << "Choose a coordinate" << endl
		<< "1)x" << endl
		<< "2)y" << endl
		<< "3)z" << endl;
	while (1) {
		int b = safe_input();
		switch (b)
		{
		case 1: {this->x = this->x - min; return *this; }
		case 2: {this->y = this->y - min; return *this; }
		case 3: {this->z = this->z - min; return *this; }
		default: break;
		}
	}
	return coordinates();
}

