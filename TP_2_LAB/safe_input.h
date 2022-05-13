#pragma once
#include <iostream>
using namespace std;
inline int safe_input() {
	int a = 0;
	while (1){
		cin >> a;
		if (cin.good()) {
			cin.ignore(100, '\n');
			return a;
		}
		std::cin.clear();
		std::cin.ignore(100, '\n');
	}
}