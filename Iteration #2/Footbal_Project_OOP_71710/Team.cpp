#include "stdafx.h"
#include "Team.h"

Team::Team()
{
	setTeamName("No name");
	setNumOfPlayers(0);
	setPlayers(nullptr);
	setCoachName("No Name Assigned");
	setCoachStats(0);
}

Team::Team(char* newTeamName, int newNumOfPlayers, Player * newPlayers, char * newCoachName, int newCoachStats)
{
	setTeamName(newTeamName);
	setNumOfPlayers(newNumOfPlayers);
	setPlayers(newPlayers);
	setCoachName(newCoachName);
	setCoachStats(newCoachStats);
}

Team::Team(const Team & team)
{
	setTeamName(team.teamName);
	setNumOfPlayers(team.NumOfPlayers);
	setPlayers(team.Players);
	setCoachName(team.CoachName);
	setCoachStats(team.CoachStats);
}

Team::~Team()
{
	delete[] teamName;
	NumOfPlayers = 0;
	Players->~Player();
	delete[] CoachName;
	CoachStats = 0;
}

void Team::setTeamName(char * newTeamName)
{
	if (newTeamName != nullptr)
	{
		teamName = new char[strlen(newTeamName) + 1];
		strcpy_s(teamName, strlen(newTeamName) + 1, newTeamName);
	}
	else
	{
		cout << "Trying to set nullptr!" << endl;
	}
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

char * Team::getTeamName() const
{
	return teamName;
}

Player Team::getPlayer(int i) const
{
	return Players[i];
}

void Team::operator=(const Team & other)
{
	setTeamName(other.teamName);
	setNumOfPlayers(other.NumOfPlayers);
	setPlayers(other.Players);
	setCoachName(other.CoachName);
	setCoachStats(other.CoachStats);

}

bool Team::operator==(const Team & other)
{
	if (other.teamName == other.teamName)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
