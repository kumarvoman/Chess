#pragma once
class IPiece;

class Slot
{
	IPiece *piece;
	int x;
	int y;
	bool bOccupied;
public:
	Slot();
	int getX();
	int getY();
};

