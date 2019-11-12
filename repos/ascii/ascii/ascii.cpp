#include <windows.h>
#include <iostream>
#include <string>
#include "player.h"

const int LEVELWIDTH = 20;
const int LEVELHEIGHT = 10;

Player p;

int healthup = 10;
int healthdown = 20;
int goldup = 1;
char health = 'H';
char trap = 'T';
char gold = 'G';

unsigned int playerPositionX = 24;
unsigned int playerPositionY = 24;
unsigned int newPlayerPositionX = playerPositionX;
unsigned int newPlayerPositionY = playerPositionY;

void displayMap();
void displayHUD();


char map[30][30] =
{
	{ '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',health,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',gold,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',trap,' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',gold,' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',health,' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ','#','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',gold,' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',trap,' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',health,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
	{ '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#' }
};



void gotoScreenPosition(short C, short R)
{
	COORD xy;
	xy.X = C;
	xy.Y = R;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), xy);
}

void handleInput()
{
	newPlayerPositionX = playerPositionX;
	newPlayerPositionY = playerPositionY;

	if (GetKeyState(VK_UP) & 0x8000)
	{
		newPlayerPositionY = playerPositionY - 1;
	}

	if (GetKeyState(VK_DOWN) & 0x8000)
	{
		newPlayerPositionY = playerPositionY + 1;
	}

	if (GetKeyState(VK_RIGHT) & 0x8000)
	{
		newPlayerPositionX = playerPositionX + 1;
	}

	if (GetKeyState(VK_LEFT) & 0x8000)
	{
		newPlayerPositionX = playerPositionX - 1;
	}
}

void renderScene()
{
	if (map[newPlayerPositionY][newPlayerPositionX] == 'H')
	{
		p.setHealth("up", healthup);
		map[newPlayerPositionY][newPlayerPositionX] = ' ';
	}

	if (map[newPlayerPositionY][newPlayerPositionX] == 'T')
	{
		p.setHealth("down", healthdown);
		map[newPlayerPositionY][newPlayerPositionX] = ' ';
	}

	if (map[newPlayerPositionY][newPlayerPositionX] == 'G')
	{
		p.setMoney("up", goldup);
		map[newPlayerPositionY][newPlayerPositionX] = ' ';
	}
	// Blank old player position
	if (map[newPlayerPositionY][newPlayerPositionX] != '#')
	{
		gotoScreenPosition(playerPositionX, playerPositionY);
		std::cout << ' ';

		// Draw new player position
		gotoScreenPosition(newPlayerPositionX, newPlayerPositionY);
		std::cout << 'P';

		playerPositionX = newPlayerPositionX;
		playerPositionY = newPlayerPositionY;

	}

	Sleep(60);
}

void displayMap()
{
	std::cout << "Movement: Arrow Keys  -  Open Inventory: I" << std::endl;
	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			std::cout << map[i][j];
		}
		std::cout << std::endl;

	}
}

void displayHUD()
{
	std::cout << "Health: " << p.getHealth() << std::endl;
	std::cout << "Gold: " << p.getMoney() << std::endl;
	std::cout << "Strength: " << p.getStrength() << std::endl;
	std::cout << "Defence: " << p.getDefence() << std::endl;
}

int main()
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);

	MoveWindow(console, r.left, r.top, 800, 800, TRUE);

	/*Player p;*/
	p.setMoney("init", 0);
	p.setHealth("init", 50);
	p.setStrength("init", 5);
	p.setDefence("init", 0);

	//gotoXY(8, 9);
	displayMap();
	displayHUD();

	while (true)
	{
		// Handles the input and updates the players position
		handleInput();

		// Render the scene
		renderScene();
	}

	system("pause");
}