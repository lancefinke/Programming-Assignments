#include<iostream>
#include<thread>

static bool s_Finished = false;

void doWork() {

	using namespace std::literals::chrono_literals;
	std::cout << "Started Thread: " << std::this_thread::get_id << std::endl;

	while (!s_Finished) {


		std::cout << "Working...\n";
		std::this_thread::sleep_for(1s);
	}
}

void threadExample() {
	std::thread worker(doWork);

	std::cin.get();//waits for user to press eneter then sets boolean to true
	s_Finished = true;

	worker.join();//waits for thread to join, basically ask compiler to wait for this thread to finish work

	
}