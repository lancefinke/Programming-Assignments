#include<iostream>
#include"funcs.h"

int main() {

	pointerExample();

	referenceExample();

	Log log;

	log.setLevel(Log::Info);

	log.info("it works");

	
}