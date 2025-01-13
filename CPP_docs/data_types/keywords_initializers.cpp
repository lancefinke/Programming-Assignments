#include<iostream>
#include<ostream>

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

	delete a, b;

	//operator overloading

	struct vector {
		float x, y;

		vector(float x, float y) :x(x), y(y) {};


		vector add(const vector& other) const {
			return vector(x + other.x, y + other.y);
		}

		//override + operator
		vector operator+(const vector& other) const {
			return add(other);
		}
	};

	

	vector pos(4.0f, 4.5f);

	vector pos2(3.6f, 8.3f);

	vector pos3 = pos.add(pos2);

	vector pos4 = pos3 + pos2;//overloads operator

	



	
}

