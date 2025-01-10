#pragma once //pre process, pragma states to only allow this to be included once in a file

void logMultiply(int a, int b);

//place declaration in header file



//can also use traditional syntax:

#ifndef _EXAMPLE_
#define _EXAMPLE

//type code here

#endif
//if Example is not defined, it will define it

//pragma once is cleaner, so use it in most cases