
#include "Game1.h"


int main()
{
	Game1 *pGame = new Game1(1000, 1000, false, "Game1");
	pGame->RunGame();
	delete pGame;

	return 0;
};