// Cross4 Game.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "BoardGame.h"



int main()
{

	BoardGame a;

	a.nextPlay();
	a.printBoard();

	do
	{
		a.setChar();
	} while (!a.checkForWin());



	return 0;
}

