#ifndef ENEMY_H
#define ENEMY_H
#include <string>
#include "player.h"

class Enemy
{
public:
	Enemy();
	Enemy(int nparam);

	std::string getName() const;
	void setName(std::string Name);

private:
	std::string name;
	Player* thePlayer;
}; 

#endif
