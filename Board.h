#pragma once
#include <vector>

class Slot;

class Board
{
	std::vector<std::vector<Slot*>> slots;
public:
	bool reset();
};

