#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string s2 = "HI THIS IS";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str:       " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;

	str = "word changed";
	std::cout << "str:       " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
}
