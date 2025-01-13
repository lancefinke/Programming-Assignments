#include<iostream>
#include<array>

void arrayExample() {


	int arr[10]; //creates int array with length 10;

	arr[4] = 13;

	std::cout << arr[4] << std::endl;

	//arrays are pointers

	int* ptr = arr;

	*(ptr + 1) = 3; //sets arr[1]=3

	std::cout << arr[1] << std::endl;

	int* arr2 = new int[5];//created on heap

	
	delete[] arr2;

	const int size = sizeof(arr) / sizeof(int);

	//another way to make array with std

	std::array<int, 8> arr3;

	std::cout << arr3.size() << std::endl; //easier way to find size
}