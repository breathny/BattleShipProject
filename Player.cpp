#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::PlacementShip() // 배치함수
{
	int i;

	if (row1 == row2) { 
		if (col1 < col2) { 
			for (i = col1; i <= col2; ++i) {
				tile.push_back(Tile(i, row1));
			}
		}
		else {
			for (i = col2; i <= col1; ++i) {
				tile.push_back(Tile(1, row1));
			}
		}
	}
	else {
		if (row1 < row2) 
			for (i = row1; i <= row2; ++i) {
				tile.push_back(Tile(col1, i));
			}
		}else {
		for (i = row2; i <= row1; ++i) {
			tile.push_back(Tile(col1, i));
			}
	}
}

Ship::Ship(const shipInfo$ i, char r1, char r2, char c1, char c2) {

	info = i;
	PlacementShip(section, r1, r2, c1, c2);


}

void Player::ClearField() // 초기화
{
	for (int i = 0; i < row; i++)

	{
		for (int j = 0; j < col; j++)
		{
			matrix[i][j] = 0;

		}
	}
}

void Player::AttackedTile()
{
}
