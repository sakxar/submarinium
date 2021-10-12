#include "include.h"

HANDLE coHandle = GetStdHandle(STD_OUTPUT_HANDLE);

int main() {
	SetConsoleTitle(TEXT("submarinium"));
	while (true) {
		SetConsoleTextAttribute(coHandle, 9);
		std::cout << "/[" << usr << "@" << dir << "]/~: ";
		SetConsoleTextAttribute(coHandle, DEFAULT_CMD);
		getCommand();
		if (args[0] == "echo") cmd::echo();
		else {
			SetConsoleTextAttribute(coHandle, ERROR_CMD);
			std::cout << "Invalid Command.";
		}
		std::cout << std::endl;
		args.clear();
	}
	return 0;
}