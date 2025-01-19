#define GLFW_INCLUDE_NONE
#include<iostream>
#include <GLFW/glfw3.h>
#include <thread>
#include <chrono>
#include "funcs.h"


void error_callback(int error, const char* description)
{
	fprintf(stderr, "Error: %s\n", description);
}



int main() {

	/*if (!glfwInit())
	{
		std::cout << "Init failed" << std::endl;
	}

	GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
	if (!window)
	{
		std::cout << "window failed" << std::endl;
	}

	std::this_thread::sleep_for(std::chrono::milliseconds(5000));
	
	glfwTerminate();



	
	std::cin.get();*/

	//threadExample();

	timingExample();
}
