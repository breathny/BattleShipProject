#include<ctime> // 기본제공 헤더파일 꺽쇄가있으면  
#include<iostream>
#include "battleshipEnums.h"
#include "GameMode.h"

using namespace std;


int maxship = 0;

void main()
{
	GameMode gm = GameMode();

	gm.InitGame();

	//while (gm.VictoryCheck())
	{
		//gm.Attack();
		//gm.TurnChange();
	}

	
	return 0;

}
