#include <iostream>
#include "multiply.h"   //includes header file declaration
#include "functions.h"


int main() {


	int var = 8;//signed int: -2b -> 2b

	unsigned int num = 10;//can store value twice of a signed but


	float f = 5.5f; //float format
	double d = 2.2; //double format

	std::cout << var << std::endl;
	std::cout << sizeof(d) << "____" << sizeof(f) << std::endl;

	logMultiply(7, 4);

	isFive(3);
	

	std::cin.get();
}