#include "include.h"

std::vector<std::string> args;
std::string usr = "dev";
std::string dir = "root";

void getCommand() {
	std::string input;
	std::getline(std::cin, input);
	std::istringstream sstream(input);
	std::string token;
	while (std::getline(sstream, token, ' '))
		args.push_back(token);
}