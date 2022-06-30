#pragma once
#include "board.hpp"
#include "game.hpp"
#include <string>

int main() {
	std::vector<int> temp;
	temp = menu();
	if (temp[0] == -1) {
		std::cout << "\nSee you next time! \n";
		return 0;
	}
}