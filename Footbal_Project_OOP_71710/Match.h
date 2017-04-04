#pragma once
#include "Team.h"

class Match
{
private:
	Team HomeTeam;
	Team GuestTeam;
	const int FirstHalf = 45;
	const int SecondHalf = 45;
	int HomeTeamGoals;
	int GuestTeamGoals;
	int HomeRedCards;
	int GuestRedCards;
	int HomeYellowCards;
	int GuestYellowCards;

public:
	Match();
	Match(Team newHomeTeam, Team newGuestTeam, int newHomeGoals,
		int newGuestGoals, int newHomeRedCards, int newGuestRedCards,
		int newHomeYellowCards, int newGuestYellowCards);
	~Match();

	void setHomeTeam(Team newHomeTeam);
	void setGuestTeam(Team newGuestTeam);
	void setHomeTeamGoals(int newHomeTeamGoals);
	void setGuestTeamGoals(int newGuestTeamGoals);
	void setHomeRedCards(int newHomeRedCards);
	void setGuestRedCards(int newGuestRedCards);
	void setHomeYellowCards(int newHomeYellowCards);
	void setGuestYellowCards(int newGuestYellowCards);


};