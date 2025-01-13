#include<iostream>
#include<string>

void stringExample() {

	const char* str = "Hello ";//one way to initalize string
	

	std::string name = "Lance";

	int len = name.size(); //length

	//apending string

	std::string greeting = std::string(str) + name;

	std::cout << greeting << std::endl;
	

}

void stringLiterals() {

	const char* str1 = u8"8 bit per character stirng";

	const wchar_t* str2 = L"wide string";

	const char16_t* str3 = u"16 bit per character string";

	const char32_t* str4 = U"32 bit per character stirng";



	//multiline paragraph

	std::string text = R"(Line1
line2
line3
line4)";

	std::cout << text << std::endl;
}