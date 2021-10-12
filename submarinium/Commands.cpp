#include "include.h"

namespace cmd {
	void echo() {
		for (int i = 1; i < args.size(); i++) {
			std::cout << args[i] << " ";
		}
	}
}