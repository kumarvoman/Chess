// Chess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Game.h"

using namespace std;

int main()
{
    //vector<vector<int>> sdf(8, vector<int>(8, 0));

    Game* _game = new Game();
    _game->startGame();
    std::cout << "Hello World!\n";
}