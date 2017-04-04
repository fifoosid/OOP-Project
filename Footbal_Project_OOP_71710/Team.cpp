#include "stdafx.h"
#include "Team.h"

Team::Team()
{
	setNumOfPlayers(0);
	setPlayers(nullptr);
	setPlayerChar(nullptr);
	setCoachName("No Name Assigned");
	setCoachStats(0);
}

Team::Team(int newNumOfPlayers, Player * newPlayers, PlayerCharachteristics * newPlayerChar, char * newCoachName, int newCoachStats)
{
	setNumOfPlayers(newNumOfPlayers);
	setPlayers(newPlayers);
	setPlayerChar(newPlayerChar);
	setCoachName(newCoachName);
	setCoachStats(newCoachStats);
}

Team::~Team()
{
	NumOfPlayers = 0;
	Players->~Player();
	PlayersChar->~PlayerCharachteristics();
	delete[] CoachName;
	CoachStats = 0;
}

void Team::setNumOfPlayers(int newNumOfPlayers)
{
	NumOfPlayers = newNumOfPlayers;
}

void Team::setPlayers(Player *newPlayers)
{
	for (size_t i = 0; i < NumOfPlayers; i++)
	{
		Players[i] = newPlayers[i];
	}
}

void Team::setPlayerChar(PlayerCharachteristics *newPlayerChar)
{
	for (size_t i = 0; i < NumOfPlayers; i++)
	{
		PlayersChar[i] = newPlayerChar[i];
	}
}

void Team::setCoachName(char *newCoachName)
{
	delete[] CoachName;
	CoachName = new char[strlen(newCoachName) + 1];
	strcpy_s(CoachName, strlen(newCoachName) + 1, newCoachName);
	
}

void Team::setCoachStats(int newCoachStats)
{
	CoachStats = newCoachStats;
}

void Team::operator=(const Team & other)
{
	setNumOfPlayers(other.NumOfPlayers);
	setPlayers(other.Players);
	setPlayerChar(other.PlayersChar);
	setCoachName(other.CoachName);
	setCoachStats(other.CoachStats);

}
