#pragma once

#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
#include <sstream>
#include <minmax.h>

#define ERROR_CMD 79
#define DEFAULT_CMD 15

extern HANDLE coHandle;
extern std::vector<std::string> args;
extern std::string usr;
extern std::string dir;

namespace cmd {
	void echo();
}

void getCommand();