#pragma once
#include <vector>
#include "Field.h"
#include "Ship.h"

class Player
{
public:
	Player();
	~Player();

	Field field;
	std::vector<Ship> ship;

	void PlacementShip();
	void ClearField();
	void AttackedTile();
};

