#pragma once
#include "Team.h"


class Tournament
{
private:
	char* NameOfTheTournament;
	size_t numberOfTeams;
	Team* teams;
	Team winner;
	int *pointForTeam;

public:
	Tournament();
	Tournament(char* newNameOfTheTournament,
		size_t newNymberOfTeams,
		Team* teams,
		int* newPointForTeam);
	Tournament(const Tournament& tournament);
	~Tournament();

	void setNameOfTheTournament(char *newNameOfTheTournament);
	void setNumberOfTeams(size_t newNumberOfTeams);
	void setTeams(Team* newTeams);
	void setWinner();
	void setPointForTeam(int* newPointForTeam);

	char* getTournamentName() const;
	size_t getNumberOfTeams() const;
	Team* getTeams() const;
	Team getWinner() const;
	int getPointForTeam(int i = 0) const;



};