#include "Game.h"
#include "HumanPlayer.h"

Game::Game() {
	
}

void Game::startGame() {
	std::cout << "Game starting between " << getPlayer1() << " & " << getPlayer2() << std::endl;
}

void Game::GameReset() {
	//_board.reset();
}

std::string Game::getPlayer1() {
	return player1->getName();

}
std::string Game::getPlayer2() {
	return player2->getName();
}