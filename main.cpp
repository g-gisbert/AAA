#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{

	Game app = Game(300, 300, "Ma super fenetre");

	app.createMap("Sachatte du Bourpalette", "ressource/map/map0.txt");
	app.createMap("Asayo, j'ai plus faim", "ressource/map/map0.txt");

	app.changeMap("Sachatte du Bourpalette");
	app.currentMap->loadMap();
	app.currentMap->bonjour();

	app.changeMap("Asayo, j'ai plus faim");
	app.currentMap->bonjour();

	app.changeMap("Sachatte du Bourpalette");
	app.currentMap->bonjour();

	return 0;
}