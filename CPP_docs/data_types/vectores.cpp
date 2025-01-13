#include<iostream>
#include<vector>

void vectorExample() {

	std::vector<int> v;

	v.push_back(3); //add to array

	v.size();//get size

	srand(time(0));

	for (int i = 0; i < 10; i++) {
		int num = rand() % 10;
		v.push_back(num);
		std::cout << num << std::endl;

	}


	std::cout << "Value at index 5: " << v[5] << std::endl;


	//makes sure to always pass array by reference

	v.erase(v.begin() + 5);

	std::cout << "New value at index 5: " << v[5] << std::endl;



}