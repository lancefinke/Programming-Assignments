#include<iostream>

//stores memory address





void pointerExample() {

	int var = 8;

	int* pVar = &var;//stores var's memory value //ampersand is reference symbol

	std::cout <<"Address:"<< pVar << std::endl;


	*pVar = 20;//changes value at pVar address

	std::cout << "New Value:" << var << std::endl;

	//allocate memory:

	char* buffer = new char[8]; //allocates 8 bytes of memory

	memset(buffer, 0, 8); //sets 8 bytes to 0

	char** ptr = &buffer; //creates double pointer. points to variable buffer.

	delete[] buffer; 

}