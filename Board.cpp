#include "Board.h"
#include "Slot.h"

bool Board::reset()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			Slot* _s = new Slot();
			slots[i][j] = _s;
		}
	}
	return true;
}