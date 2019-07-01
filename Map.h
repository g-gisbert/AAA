#pragma once

#include <string>
#include <vector>

class Map
{
public:
	Map(std::string n, std::string fn);
	~Map();

	bool loadMap();

	void render();

	void bonjour();

private:
	std::string name;
	std::string fileName;

	std::vector<std::vector<int>> structMap;
};

