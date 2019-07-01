#pragma once

#include <string>
#include <map>
#include <SFML/Graphics.hpp>
#include "Map.h"

class Game
{
public:
	// Constructor and destructor
	Game(int x, int y, std::string appName);
	~Game();

	void changeMap(std::string name);
	void createMap(std::string name, std::string fileName);

	bool mainLoop();

	Map *currentMap;

private:
	// Window dimension
	int width;
	int heigh;

	sf::RenderWindow *window;

	std::map<std::string, Map*> maps;

};

