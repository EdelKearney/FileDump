#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
	Player();
	Player(int hparam, int mparam, int sparam, int dparam);

	int getMoney() const;
	void setMoney(std::string type, int Money);

	int getHealth() const;
	void setHealth(std::string type, int Health);

	int getStrength() const;
	void setStrength(std::string type, int Strength);

	int getDefence() const;
	void setDefence(std::string type, int Defence);

private:
	int health;
	int money;
	int strength;
	int defence;
};

#endif // PLAYER_H