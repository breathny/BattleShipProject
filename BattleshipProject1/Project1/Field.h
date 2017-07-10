#pragma once
#include "Tile.h"
#include "Ship.h"

class Field
{
public:
	Field();
	~Field();

	Tile tile[8][8];

	void Init();
	void SetTile();
	Tile* GetTile(int x, int y);
};

