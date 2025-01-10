#include<iostream>

void isFive(int x) {

	bool isEqual = x == 5;
	if (isEqual) {
		std::cout << "It is equal to 5"<<std::endl;
	}
	else {
		std::cout << "It is not equal to 5" << std::endl;
	}
}