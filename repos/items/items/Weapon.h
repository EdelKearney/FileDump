#include <string>
#include "items.h"

#ifndef WEAPON_H
#define WEAPON_H

class Weapon
{
public:
	Weapon();
	Weapon(std::string nParam, int vParam, int dmgParam, std::string desParam);

	std::string getName() const;
	void setName(std::string nParam);

	int getValue() const;
	void setValue(int vParam);

	int getDamage() const;
	void setDamage(int dmgParam);

	std::string getDescription() const;
	void setDescription(std::string desParam);

private:
	std::string name;
	int value;
	int damage;
	std::string description;
};

#endif // !WEAPON_H
