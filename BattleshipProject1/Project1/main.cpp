#include<ctime> // �⺻���� ������� ���Ⱑ������  
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
