#pragma once
#include <iostream>
#include <iomanip>
#include <cuchar>
#include <string>

using namespace std;


class Player
{
private:
	char* FirstName;
	char* SecondName;
	char* LastName;
	char* Nationality;
	char* ClubTeam;

public:
	Player();
	Player(char* newFirstName,
		char* newSecondName,
		char* newLastName,
		char* newNationality,
		char* newClubTeam);
	~Player();

	void setFirstName(char* newFirstName);
	void setSecondName(char* newSecondName);
	void setLastName(char* newLastName);
	void setNationality(char* newNationality);
	void setClubTeam(char* newClubTeam);

	char* getFirstName() const;
	char* getSecondName() const;
	char* getLastName() const;
	char* getNationality() const;
	char* getClubTeam() const;

	void operator=(const Player& other);

};
