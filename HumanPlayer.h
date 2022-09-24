#pragma once
#include "IPlayer.h"
class HumanPlayer : private IPlayer
{
    int rating;
    int ranking;
public:
    HumanPlayer();
    std::string		getName();
    bool			isHuman();
};

