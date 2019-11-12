#include <string>
#include "player.h"

Player::Player()
{
	health = 50;
	money = 0;
	strength = 5;
	defence = 0;
}

Player::Player(int hparam, int mparam, int sparam, int dparam)
{
	health = hparam;
	money = mparam;
	strength = sparam;
	defence = dparam;
}

int Player::getMoney() const
{
	return money;
}

void Player::setMoney(std::string type, int Money)
{
	if (type == "up")
	{
		money += Money;
	}
	else if (type == "down")
	{
		money -= Money;
	}
	else
	{
		money = Money;
	}
}

int Player::getHealth() const
{
	return health;
}

void Player::setHealth(std::string type, int Health)
{
	if (type == "up")
	{
		health += Health;
	}
	else if (type == "down")
	{
		health -= Health;
	}
	else 
	{
		health = Health;
	}
}

int Player::getStrength() const
{
	return strength;
}

void Player::setStrength(std::string type, int Strength)
{
	if (type == "up")
	{
		strength += Strength;
	}
	else if (type == "down")
	{
		strength -= Strength;
	}
	else
	{
		strength = Strength;
	}
}

int Player::getDefence() const
{
	return defence;
}

void Player::setDefence(std::string type, int Defence)
{
	if (type == "up")
	{
		defence += Defence;
	}
	else if (type == "down")
	{
		defence -= Defence;
	}
	else
	{
		defence = Defence;
	}
}