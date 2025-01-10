#include<iostream>


class Log
{
public:
	enum logLevel {
		levelError=0,Warning,Info
	};

private:
	logLevel m_logLevel = Info;
public:
	void setLevel(logLevel level) {
		m_logLevel = level;
	}

	void warn(const char* message) {
		if (m_logLevel >= Warning) {
			std::cout << "[WARNING]: " << message << std::endl;
		}
	}
	void error(const char* message) {
		if (m_logLevel >= levelError) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}
	void info(const char* message) {
		if (m_logLevel >= Info) {
			std::cout << "[INFO]: " << message << std::endl;
		}
	}

};