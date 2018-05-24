#pragma once
#include <iostream>

class BoardGame
{
	char board[4][4];
	bool winCombo = false;
	bool nextPlayer = false;
	int stepsCounter = 0;
	char playerWon = NULL;

public:
	BoardGame();
	~BoardGame();

	char getChar(int row, int column);
	void setChar();


	void printBoard();

	bool checkForWin();

	bool nextPlay();
	void setNextPlayer(bool a);
	void counterPlus();
	char getPlayerWon();
};