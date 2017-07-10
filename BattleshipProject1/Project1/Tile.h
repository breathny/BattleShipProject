#pragma once
#include "Ship.h"

class Tile
{
public:
	Tile();
	~Tile();

	Ship* pShip;
	bool isAttacked;
};

