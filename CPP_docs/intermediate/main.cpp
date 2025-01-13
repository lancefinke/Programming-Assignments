#include<iostream>
#include"funcs.h"

int main() {

	pointerExample();

	referenceExample();

	Log log;

	log.setLevel(Log::Info);

	log.info("it works");


	//Entity entity = Entity(1.2f, 3.4f); can no longer implement Entityalone with pure virtual function

	//entity.print();


	Entity3D e3d = Entity3D(1,2,3);

	e3d.print();

	e3d.volume();

	Entity* e2 = new Entity3D(4, 5, 6);

	e2->print();

	e2->volume();

	delete e2;
}