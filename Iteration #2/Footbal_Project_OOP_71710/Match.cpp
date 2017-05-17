#include "stdafx.h"
#include "Match.h"

Match::Match()
{
	setHomeTeam(Team());
	setGuestTeam(Team());
	setHomeTeamGoals(0);
	setGuestTeamGoals(0);
	setHomeRedCards(0);
	setGuestRedCards(0);
	setHomeYellowCards(0);
	setGuestYellowCards(0);
}

Match::Match(Team newHomeTeam, Team newGuestTeam, int newHomeGoals, int newGuestGoals, int newHomeRedCards, int newGuestRedCards, int newHomeYellowCards, int newGuestYellowCards)
{
	HomeTeam = newHomeTeam;
	GuestTeam = newGuestTeam;
	HomeTeamGoals = newHomeGoals;
	GuestTeamGoals = newGuestGoals;
	HomeRedCards = newHomeRedCards;
	GuestRedCards = newGuestRedCards;
	HomeYellowCards = newHomeYellowCards;
	GuestYellowCards = newGuestYellowCards;
}

void Match::setHomeTeam(Team newHomeTeam)
{
	HomeTeam = newHomeTeam;
}

void Match::setGuestTeam(Team newGuestTeam)
{
	GuestTeam = newGuestTeam;
}

void Match::setHomeTeamGoals(int newHomeTeamGoals)
{
	HomeTeamGoals = newHomeTeamGoals;
}

void Match::setGuestTeamGoals(int newGuestTeamGoals)
{
	GuestTeamGoals = newGuestTeamGoals;
}

void Match::setHomeRedCards(int newHomeRedCards)
{
	HomeRedCards = newHomeRedCards;
}

void Match::setGuestRedCards(int newGuestRedCards)
{
	GuestRedCards = newGuestRedCards;
}

void Match::setHomeYellowCards(int newHomeYellowCards)
{
	HomeYellowCards = newHomeYellowCards;
}

void Match::setGuestYellowCards(int newGuestYellowCards)
{
	GuestYellowCards = newGuestYellowCards;
}


void Match::onGoal(Team team)
{
	if (team == HomeTeam)
	{
		HomeTeamGoals++;
	}
	else if (team == GuestTeam)
	{
		GuestTeamGoals++;
	}
}
