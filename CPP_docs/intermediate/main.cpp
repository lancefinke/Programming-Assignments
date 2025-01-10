#include<iostream>
#include"funcs.h"

int main() {

	pointerExample();

	referenceExample();

	Log log;

	log.setLevel(log.infoLevel);

	log.info("it works");

	
}