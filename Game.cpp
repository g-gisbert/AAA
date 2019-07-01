#include "Game.h"
#include "Map.h"
#include <map>
#include <iostream>
#include <SFML/Graphics.hpp>


Game::Game(int x, int y, std::string appName){

	width = x;
	heigh = y;

	window = new sf::RenderWindow(sf::VideoMode(width, heigh), appName);
}

Game::~Game(){
	delete window;
	for (auto it = maps.begin(); it != maps.end(); ++it)
	{
		delete it->second;
	}
}

void Game::changeMap(std::string name) {
	currentMap = maps[name];
}

void Game::createMap(std::string name, std::string fileName) {
	maps[name] = new Map(name, fileName);
}

bool Game::mainLoop() {

	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window->isOpen())
	{
		// Input
		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window->close();
		}

		// Process
		

		// Render
		window->clear();
		window->draw(shape);
		window->display();
	}

	return true;
}
