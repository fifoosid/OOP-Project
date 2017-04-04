#include "stdafx.h"
#include "Player.h"



Player::Player()
{
	this->setFirstName("No");
	this->setSecondName("Name");
	this->setLastName("Assigned");
	this->setNationality("No country entered");
	this->setClubTeam("No club team");
}

Player::Player(char * newFirstName, char * newSecondName, char * newLastName, char * newNationality, char * newClubTeam)
{
	this->setFirstName(newFirstName);
	this->setSecondName(newSecondName);
	this->setLastName(newLastName);
	this->setNationality(newNationality);
	this->setClubTeam(newClubTeam);
}

Player::~Player()
{
	delete[] FirstName;
	delete[] SecondName;
	delete[] LastName;
	delete[] Nationality;
	delete[] ClubTeam;
}

void Player::setFirstName(char* newFirstName)
{
	if (newFirstName != nullptr)
	{
		FirstName = new char[strlen(newFirstName) + 1];
		strcpy_s(FirstName, strlen(newFirstName) + 1, newFirstName);
	}
}

void Player::setSecondName(char * newSecondName)
{
	SecondName = new char[strlen(newSecondName) + 1];
	strcpy_s(SecondName, strlen(newSecondName) + 1, newSecondName);
}

void Player::setLastName(char * newLastName)
{
	LastName = new char[strlen(newLastName) + 1];
	strcpy_s(LastName, strlen(newLastName) + 1, newLastName);
}

void Player::setNationality(char * newNationality)
{
	Nationality = new char[strlen(newNationality) + 1];
	strcpy_s(Nationality, strlen(newNationality) + 1, newNationality);
}

void Player::setClubTeam(char * newClubTeam)
{
	ClubTeam = new char[strlen(newClubTeam) + 1];
	strcpy_s(ClubTeam, strlen(newClubTeam) + 1, newClubTeam);
}

char * Player::getFirstName() const
{
	return FirstName;
}

char * Player::getSecondName() const
{
	return SecondName;
}

char * Player::getLastName() const
{
	return LastName;
}

char * Player::getNationality() const
{
	return Nationality;
}

char * Player::getClubTeam() const
{
	return ClubTeam;
}

void Player::operator=(const Player & other)
{
	setFirstName(other.getFirstName());
	setSecondName(other.getSecondName());
	setLastName(other.getLastName());
	setNationality(other.getNationality()); 
	setClubTeam(other.getClubTeam());
}


