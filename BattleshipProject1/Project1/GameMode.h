#pragma once
#include "battleshipEnums.h"
#include "Player.h"

class GameMode
{
public:
	GameMode();
	~GameMode();

	Player players[2];
	PlayerName turnOwner;

	void InitGame();
	bool VictoryCheck();
	void Attack(Player target, int x, int y);
	void TurnChange();
};

