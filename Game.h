#pragma once
#include <iostream>
#include <vector>

class Board;
class Slots;
class IPlayer;

class Game
{
	Board* _board;
	IPlayer* player1;
	IPlayer* player2;

public:
	Game();
	void startGame();
	void GameReset();

	std::string getPlayer1();
	std::string getPlayer2();
};

