#include<iostream>

class Entity {
public:
	int x, y;

	Entity(int a, int b) {//constructor
		x = a;
		y = b;
	}

	~Entity() { //destrcutor, automatically called
		std::cout << "Destroyed Entity" << std::endl;
	}

	virtual void print() { //by declaring virtual, this ensures a 3D entity declared as a Entity will run the 3D entity print function.
		std::cout << x << "," << y << std::endl;
	}

	virtual void volume() = 0;
};


class Entity3D : public Entity {
public:
	int z;

	Entity3D(int a, int b, int c) : Entity(a,b){
		z = c;
	}

	void print() override {
		std::cout << x << y << z << std::endl;
	}

	void volume() override {

		int vol = x * y * z;
		std::cout << "Volume " << vol << std::endl;
	}
};