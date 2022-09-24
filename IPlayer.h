#pragma once
#include <iostream>

class IPlayer {
	int				id;
	std::string		Name;
	bool			bHuman;
public:
	virtual std::string		getName() = 0;
	virtual bool			isHuman() = 0;
};