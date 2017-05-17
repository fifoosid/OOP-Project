#pragma once
#include "Player.h"
#include "PlayerCharachteristics.h"
#include <string>


class Team 
{
private:
	char* teamName;
	size_t NumOfPlayers;
	Player *Players;
	char *CoachName;
	int CoachStats; // Максимум 100(перфектният треньор)

public:
	Team();
	Team(char* newTeamName,int newNumOfPlayers, Player *newPlayers,
		char* newCoachName, int newCoachStats);
	Team(const Team& team);
	~Team();

	void setTeamName(char* newTeamName);
	void setNumOfPlayers(int newNumOfPlayers);
	void setPlayers(Player *newPlayers);
	void setCoachName(char *newCoachName);
	void setCoachStats(int newCoachStats);

	char* getTeamName() const;
	Player getPlayer(int i) const;

	void operator=(const Team& other);
	bool operator==(const Team& other);
};