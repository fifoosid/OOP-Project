#pragma once
#include "Player.h"
#include "PlayerCharachteristics.h"
#include <string>


class Team
{
private:
	size_t NumOfPlayers;
	Player *Players;
	PlayerCharachteristics *PlayersChar;
	char *CoachName;
	int CoachStats; // Максимум 100(перфектният треньор

public:
	Team();
	Team(int newNumOfPlayers, Player *newPlayers, PlayerCharachteristics *newPlayerChar,
		char* newCoachName, int newCoachStats);
	~Team();

	void setNumOfPlayers(int newNumOfPlayers);
	void setPlayers(Player *newPlayers);
	void setPlayerChar(PlayerCharachteristics *newPlayerChar);
	void setCoachName(char *newCoachName);
	void setCoachStats(int newCoachStats);

	void operator=(const Team& other);
};