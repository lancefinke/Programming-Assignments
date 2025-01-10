#include<iostream>

//help to keep code cleaner

void enumExample() {
	enum e : unsigned{
		A,B,C
	};

	//starts by default at 0, then increment by 1 unless otherwise specified.

	e value = B;

	if (value == 1) {
		//do something here
	}
}