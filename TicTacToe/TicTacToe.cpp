// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>

using namespace std;

//
// 
//

void showWelcomeStatement()
{
	printf("Welcome To Tic-tac-toe game! Play with your way!\n\n");
	printf("If you find any problem, please contact vinh.nguyendoba@gameloft.com\n\n");
}

//
//
//

int selectMode()
{
	int selection;
	printf("SELECT YOUR MODE(1 - PLAY GAME, 2 - REPLAY GAME, OTHERS - EXIT GAME):\n");
	cin >> selection;
	return selection;
}

//
//
//



//
//
//

int main()
{
	showWelcomeStatement();
	cout << selectMode();
    return 0;
}

