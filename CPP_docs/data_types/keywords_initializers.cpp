#include<iostream>

void keywords() {


	const char* str = "const keeps values the same";

	std::cout << str << std::endl;

	//when use with a pointer:

	const int* a = new int; //value at a cant be changed, but pointer can

	int* const b = new int; //makes pointer itself constant

	//const can also be placed after class functions to prevent that function from changing member variables


	//mutable allows variable to be modifed by const functions

	
	//ternary operators:

	static int num = 5;

	num = num > 5 ? 100 : 0;//sets num=100 if it's greater than 5, or to 0 if it's less than 5

	
}

