#pragma once
#include "board.hpp"
#include "player.hpp"
#include <conio.h>

std::vector <int> menu();
void changePlayerPromt();
bool endGameCheck(int turnsLeft, int maxPoints1, int maxPoints2, int maxPoints, Player* player1Ptr, Player* player2Ptr);