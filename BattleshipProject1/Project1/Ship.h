#pragma once
#include "battleshipEnums.h"
#include <vector>
#include <string>

class Ship {
public:

	//배정보는 배의 사이즈와 타입
	typedef struct {
		std::string type;
		char size;
	} shipInfo;


	Ship(const shipInfo&, char c1, char r1, char c2, char r2);

	std::string type) {
	return info.type;
	}

	char size() {
		return info.size;
	}

	std::vector<Tile>::iterator shipBegin() {
		return section.begin();
	}

	std::vector<Tile>::iterator shipEnd() {
		return section.end();
	}

private:
	shipInfo info;
	std::vector<Tile> section;
};
	

