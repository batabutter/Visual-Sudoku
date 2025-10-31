#pragma once

#include <vector>
#define BOARD_SIZE 27

class Board {

private:
		std::vector<std::vector<int>> grid;
		const static int SIZE = BOARD_SIZE;
public:

	Board();
	void setCell(int row, int col, int value);
	int getCell(int row, int col) const;
	bool isValidMove(int row, int col, int value) const;
	void render() const;
};