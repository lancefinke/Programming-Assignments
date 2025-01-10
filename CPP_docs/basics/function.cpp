#include<iostream>


int multiply(int a, int b) {
	return a * b;
}

void logMultiply(int a, int b) {
	int result = multiply(a, b);

	std::cout << result << std::endl;
}

