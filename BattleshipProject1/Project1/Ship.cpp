#include "Ship.h"

bool Ship::checkSize(char size, char col1, char row1, char col2, char row2)
{ //내 판과 check판 size비교

	if (row1 == row2) {  
		if (col1 > col2) {
			if ((col1 - col2)) {
				if ((col1 - col2)) + 1 == size{
					return true;
				}
				else
				{
					if ((col2 - col1) + 1 == size) {
						return true;
					}

				}
			}

			if (col1 == col2) {
				if (row1 > row2) {
					if ((row1 - row2) + 1 == size) {
						return true;
					}

				}
				else {
					if ((row2 - row1) + 1 == size) {
						return true;
					}
				}
			}
			return false;

		}
	}
}