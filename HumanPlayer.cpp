#include "HumanPlayer.h"

HumanPlayer::HumanPlayer() {
	rating = 0;
	ranking = 0;
}

std::string	HumanPlayer::getName() {
	return "";
}

bool HumanPlayer::isHuman() {
	return true;
}