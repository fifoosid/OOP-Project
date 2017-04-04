#include "stdafx.h"
#include "PlayerCharachteristics.h"

PlayerCharachteristics::PlayerCharachteristics()
{
	setAge(0);
	setStrongrtFoot(Foot::None);
	setPosition(Position::None);
	setSkills(0);
}

PlayerCharachteristics::PlayerCharachteristics(int newAge, Foot newStrongerFoot, Position newPlayerPosition, int newSkills)
{
	Age = newAge;
	StrongerFoot = newStrongerFoot;
	PlayerPosition = newPlayerPosition;
	Skills = newSkills;
}

PlayerCharachteristics::~PlayerCharachteristics()
{
	Age = 0;
	StrongerFoot = Foot::None;
	PlayerPosition = Position::None;
	Skills = 0;
}

void PlayerCharachteristics::setAge(int newAge)
{
	Age = newAge;
}

void PlayerCharachteristics::setStrongrtFoot(Foot newStrongerFoor)
{
	StrongerFoot = newStrongerFoor;
}

void PlayerCharachteristics::setPosition(Position newPosition)
{
	PlayerPosition = newPosition;
}

void PlayerCharachteristics::setSkills(int newSkills)
{
	Skills = newSkills;
}

int PlayerCharachteristics::getAge() const
{
	return Age;
}
char* ReturnPosition(Position pos)
{
	switch (pos)
	{
	case Position::Defender: return "Defender"; break;
	case Position::Middlefielder: return "Middlefielder"; break;
	case Position::Striker: return "Striker"; break;
	default: return "None"; break;
	}
}
char * PlayerCharachteristics::getPlayerPosition() const
{
	return ReturnPosition(PlayerPosition);
}
int PlayerCharachteristics::getSkills() const
{
	return Skills;
}
void PlayerCharachteristics::operator=(const PlayerCharachteristics& other)
{
	setAge(other.getAge());
	setStrongrtFoot(other.StrongerFoot);
	setPosition(other.PlayerPosition);
	setSkills(other.getSkills());
}
char* ReturnStrongerFoot(Foot foot)
{
	switch (foot)
	{
	case Foot::Left: return "Left"; break;
	case Foot::Right: return "Right"; break;
	default: return "None"; break;
	}
}
char * PlayerCharachteristics::getStrongerFoot() const
{
	return ReturnStrongerFoot(StrongerFoot);
}
