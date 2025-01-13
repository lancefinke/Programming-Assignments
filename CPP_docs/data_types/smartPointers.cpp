#include<iostream>
#include <cmath>

void smartPointerExample() {
	//allows users to avoid using new and delete keyword


	//unique Pointer, when goes out of scope, pointer automatically gets deleted, must be unqiue

	{
		std::unique_ptr<float> num = std::make_unique<float>();

		*num = 4.0f;


		std::cout << *num + (rand()%10) << std::endl;

		//shared pointer, 

		std::shared_ptr<float> sharedFloat = std::make_shared<float>();
		
	}
}