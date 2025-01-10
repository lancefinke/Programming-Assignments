#include<iostream>


void increment(int& value) {
	
	value++;

	//it's passed by reference to avoid making a copy
}


//a way for us to reference existing variable
void referenceExample() {

	int a = 5;

	int& ref = a; //created alias for a

	ref = 2;

	std::cout << a << std::endl;

	increment(a);

	std::cout << a << std::endl;
}