#include "GameMode.h"

GameMode::GameMode()
{
}

GameMode::~GameMode()
{
}

void GameMode::InitGame()
{
}

bool GameMode::VictoryCheck()
{
}

bool GameMode::Attack(Player target, int row, int col)
{
	if (matrix[x][y] == 1)
	{
		matrix[x][y] == 2;
		return true;
	}
	return false;
}

void GameMode::TurnChange()
{
}
