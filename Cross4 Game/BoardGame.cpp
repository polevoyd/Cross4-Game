#include "stdafx.h"
#include "BoardGame.h"



// constructor that fills a board at beginning 
BoardGame::BoardGame()
{
	for (int i = 0; i < 4; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			board[i][k] = '-';

		}
	}
}

// destruct says "Thank you for playing"
BoardGame::~BoardGame()
{
	if (getPlayerWon() == 'x')
	{
		std::cout << "\t" << "X Win!" << "\n";
	}
	else if (getPlayerWon() == 'o')
	{
		std::cout << "\t" << "O Win!" << "\n";
	}
	else if (getPlayerWon() == 't')
	{
		std::cout << "\t" << "Ties!" << "\n";
	}
	std::cout << "\t" << "Thank you for playing!" << "\n";
	int a = 0;
	std::cin >> a;

}

// get a char from position, returns a char
char BoardGame::getChar(int row, int column)
{
	return board[row][column];
}

//ask for a input and put this char to position
void BoardGame::setChar()
{
	if (BoardGame::checkForWin() == false)
	{
		int row = 0, column = 0;


		std::cout << "\t" << "Enter a column number: ";
		std::cin >> column;
		std::cout << "\n";

		if (column <= 4)
		{
			if (board[3][column - 1] == '-')
			{
				if (BoardGame::nextPlay())
				{
					board[3][column - 1] = 'o';
					BoardGame::setNextPlayer(true);
					counterPlus();
					checkForWin();
				}
				else
				{
					board[3][column - 1] = 'x';
					BoardGame::setNextPlayer(false);
					counterPlus();
					checkForWin();
				}
				BoardGame::printBoard();
			}
			else if (board[2][column - 1] == '-')
			{
				if (BoardGame::nextPlay())
				{
					board[2][column - 1] = 'o';
					BoardGame::setNextPlayer(true);
					counterPlus();
					checkForWin();
				}
				else
				{
					board[2][column - 1] = 'x';
					BoardGame::setNextPlayer(false);
					counterPlus();
					checkForWin();
				}
				BoardGame::printBoard();
			}
			else if (board[1][column - 1] == '-')
			{
				if (BoardGame::nextPlay())
				{
					board[1][column - 1] = 'o';
					BoardGame::setNextPlayer(true);
					counterPlus();
					checkForWin();
				}
				else
				{
					board[1][column - 1] = 'x';
					BoardGame::setNextPlayer(false);
					counterPlus();
					checkForWin();
				}
				BoardGame::printBoard();
			}
			else if (board[0][column - 1] == '-')
			{
				if (BoardGame::nextPlay())
				{
					board[0][column - 1] = 'o';
					BoardGame::setNextPlayer(true);
					counterPlus();
					checkForWin();
				}
				else
				{
					board[0][column - 1] = 'x';
					BoardGame::setNextPlayer(false);
					counterPlus();
					checkForWin();
				}
				BoardGame::printBoard();
			}
			BoardGame::checkForWin();





		}


	}

}

// func to print a current board state
void BoardGame::printBoard()
{


	std::cout << "\t" << "1" << "\t" << "2" << "\t" << "3" << "\t" << "4" << "\n\n";
	for (int i = 0; i < 4; i++)
	{
		//std::cout << i+1 << "\t";
		std::cout << "\t";
		for (int k = 0; k < 4; k++)
		{
			std::cout << board[i][k] << "\t";
		}
		std::cout << "\n\n";
	}
}

//checking for a win
bool BoardGame::checkForWin()
{

	if ((((board[0][0] == 'x') && (board[0][1] == 'x') && (board[0][2] == 'x') && (board[0][3] == 'x'))) ||
		(((board[1][0] == 'x') && (board[1][1] == 'x') && (board[1][2] == 'x') && (board[1][3] == 'x'))) ||
		(((board[2][0] == 'x') && (board[2][1] == 'x') && (board[2][2] == 'x') && (board[2][3] == 'x'))) ||
		(((board[3][0] == 'x') && (board[3][1] == 'x') && (board[3][2] == 'x') && (board[3][3] == 'x'))) ||
		(((board[0][0] == 'x') && (board[1][1] == 'x') && (board[2][2] == 'x') && (board[3][3] == 'x'))) ||
		(((board[0][0] == 'x') && (board[1][0] == 'x') && (board[2][0] == 'x') && (board[3][0] == 'x'))) ||
		(((board[0][1] == 'x') && (board[1][1] == 'x') && (board[2][1] == 'x') && (board[3][1] == 'x'))) ||
		(((board[0][2] == 'x') && (board[1][2] == 'x') && (board[2][2] == 'x') && (board[3][2] == 'x'))) ||
		(((board[0][3] == 'x') && (board[1][3] == 'x') && (board[2][3] == 'x') && (board[3][3] == 'x'))))
	{
		playerWon = 'x';
		return true;
		BoardGame::~BoardGame();
	}
	else if ((((board[0][0] == 'o') && (board[0][1] == 'o') && (board[0][2] == 'o') && (board[0][3] == 'o'))) ||
		(((board[1][0] == 'o') && (board[1][1] == 'o') && (board[1][2] == 'o') && (board[1][3] == 'o'))) ||
		(((board[2][0] == 'o') && (board[2][1] == 'o') && (board[2][2] == 'o') && (board[2][3] == 'o'))) ||
		(((board[3][0] == 'o') && (board[3][1] == 'o') && (board[3][2] == 'o') && (board[3][3] == 'o'))) ||
		(((board[0][0] == 'o') && (board[1][1] == 'o') && (board[2][2] == 'o') && (board[3][3] == 'o'))) ||
		(((board[0][0] == 'o') && (board[1][1] == 'o') && (board[2][2] == 'o') && (board[3][3] == 'o'))) ||
		(((board[0][1] == 'o') && (board[1][1] == 'o') && (board[2][1] == 'o') && (board[3][1] == 'o'))) ||
		(((board[0][2] == 'o') && (board[1][2] == 'o') && (board[2][2] == 'o') && (board[3][2] == 'o'))) ||
		(((board[0][3] == 'o') && (board[1][3] == 'o') && (board[2][3] == 'o') && (board[3][3] == 'o'))))
	{
		playerWon = 'o';
		return true;
		BoardGame::~BoardGame();
	}
	else if (stepsCounter > 15)
	{
		playerWon = 't';
		return true;
		BoardGame::~BoardGame();
	}
	else
	{
		return false;
	}

}

//adding one more counter
void BoardGame::counterPlus()
{
	stepsCounter++;
}


//to control whos turn now and print it outside
bool BoardGame::nextPlay()
{
	if (nextPlayer)
	{
		system("CLS");
		std::cout << "\t " << "O's turn" << "\n\n";
		BoardGame::setNextPlayer(false);
		return false;
	}
	else
	{
		system("CLS");
		std::cout << "\t " << "X's turn" << "\n\n";
		BoardGame::setNextPlayer(true);
		return true;
	}
}

// set switcher to a next player
void BoardGame::setNextPlayer(bool a)
{
	nextPlayer = a;
}

//check who Won!
char BoardGame::getPlayerWon() {
	return playerWon;
}