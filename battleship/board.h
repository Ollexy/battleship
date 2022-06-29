#pragma once
#include <vector>
#include <iostream>

class Board {
private:
	int ship1;
	int ship2;
	int size;
	std::vector <std::vector<int>> board;
public:

	int coordinateVerificator(int& y, int& x, int type);
	bool placementVerificator(std::vector<int> userInput);
	void initialFill();
	void displayBoard();
	void setElement(int y, int x, int v);
	int getElement(int y, int x);
	Board(int ship1_, int ship2_, int size_);
	Board(int _size);
};