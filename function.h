#include <iostream>
#include <string>
#include <list>

void PrintList(std::list<std::string> string_list) {
	std::list<std::string>::iterator it;
	for (it = string_list.begin(); it != string_list.end(); ++it) {
		std::cout << *it;
		std::cout << "\n";
	}
}