#pragma once

enum class Foot {None, Left, Right};
enum class Position {None, Goalkeeper, Defender, Middlefielder, Striker};
class PlayerCharachteristics
{
private:
	int Age;
	Foot StrongerFoot;
	Position PlayerPosition;
	int Skills;//Уменията на играча, като максимума е 100(перфектният играч)

public:
	PlayerCharachteristics();
	PlayerCharachteristics(int newAge,
		Foot newStrongerFoot,
		Position newPlayerPosition,
		int newSkills);
	~PlayerCharachteristics();

	void setAge(int newAge);
	void setStrongrtFoot(Foot newStrongerFoor);
	void setPosition(Position newPosition);
	void setSkills(int newSkills);

	int getAge() const;
	char* getStrongerFoot() const;
	char* getPlayerPosition() const;
	int getSkills() const;

	void operator=(const PlayerCharachteristics& other);


};