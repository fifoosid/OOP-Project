#include "stdafx.h"
#include "Tournament.h"

Tournament::Tournament()
{
	setNameOfTheTournament("No name");
	setTeams(nullptr);
	setPointForTeam(nullptr);
}

Tournament::Tournament(char * newNameOfTheTournament, size_t newNymberOfTeams, Team * teams, int* newPointForTeam)
{
	setNameOfTheTournament(newNameOfTheTournament);
	setNumberOfTeams(newNymberOfTeams);
	setTeams(teams);
	setWinner();
	setPointForTeam(newPointForTeam);
}

Tournament::Tournament(const Tournament & tournament)
{
	setNameOfTheTournament(tournament.NameOfTheTournament);
	setNumberOfTeams(tournament.numberOfTeams);
	setTeams(tournament.teams);
	setWinner();
	setPointForTeam(tournament.pointForTeam);
}

Tournament::~Tournament()
{
	delete[] NameOfTheTournament;
	delete[] teams;
	delete[] pointForTeam;
}

void Tournament::setNameOfTheTournament(char * newNameOfTheTournament)
{
	if(newNameOfTheTournament != nullptr)
	{
		if (strlen(newNameOfTheTournament) > 0)
		{
			NameOfTheTournament = new char[strlen(newNameOfTheTournament) + 1];
			strcpy_s(NameOfTheTournament, strlen(newNameOfTheTournament) + 1, newNameOfTheTournament);
			return;
		}
	}
	cout << "Trying to set nullptr!" << endl;
}

void Tournament::setNumberOfTeams(size_t newNumberOfTeams)
{
	numberOfTeams = newNumberOfTeams;
}

void Tournament::setTeams(Team * newTeams)
{
	teams = new Team[numberOfTeams];
	for (size_t i = 0; i < numberOfTeams; i++)
	{
		teams[i] = newTeams[i];
	}
}

void Tournament::setWinner()
{
	int win = 0;
	if (pointForTeam != nullptr)
	{
		for (size_t i = 1; i < numberOfTeams; i++)
		{
			if (pointForTeam[i] > win)
			{
				win = i;
			}
		}
		winner = teams[win];
	}
	else 
	{
		cout << "No teams found" << endl;
	}
}

void Tournament::setPointForTeam(int * newPointForTeam)
{
	pointForTeam = new int[numberOfTeams];
	for (size_t i = 0; i < numberOfTeams; i++)
	{
		pointForTeam[i] = newPointForTeam[i];
	}
}

char * Tournament::getTournamentName() const
{
	if (NameOfTheTournament != nullptr)
	{
		return "Trying to get nullptr!";
	}
	else
	{
		return NameOfTheTournament;
	}
}

size_t Tournament::getNumberOfTeams() const
{
	return numberOfTeams;

}

Team * Tournament::getTeams() const
{
	return teams;
}

Team Tournament::getWinner() const
{
	int maxPoints = 0, temp = 0;
	for (size_t i = 1; i <= numberOfTeams; i++)
	{
		if (maxPoints < pointForTeam[i])
		{
			maxPoints = pointForTeam[i];
			temp = i;
		}

	}

	return teams[temp];
}

int Tournament::getPointForTeam(int i) const
{
	return pointForTeam[i];
}
