#include<iostream>


class Log
{
public:
	const int errorLevel = 0;
	const int warningLevel = 1;
	const int infoLevel = 2;

private:
	int m_logLevel;
public:
	void setLevel(int level) {
		m_logLevel = level;
	}

	void warn(const char* message) {
		if (m_logLevel >= warningLevel) {
			std::cout << "[WARNING]: " << message << std::endl;
		}
	}
	void error(const char* message) {
		if (m_logLevel >= errorLevel) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}
	void info(const char* message) {
		if (m_logLevel >= infoLevel) {
			std::cout << "[INFO]: " << message << std::endl;
		}
	}

};